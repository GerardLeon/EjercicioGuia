# include <stdlib.h>
# include <string.h>
# include <stdio.h>


int main (int argc, char *argv[]) {
	
	
	char peticion[100];
	char respuesta[100];
	
	strcpy (peticion, "Miguel/47/Juan/12/Maria/22/Marcos/19");
	
	char nombre[20];
	int edad;
	char *p = strtok (peticion, "/");
	
	while ( p!=NULL)
	{
		strcpy (nombre, p);
		p = strtok (NULL, "/");
		edad = atoi (p);
		
		if (edad > 18)
			sprintf (respuesta, "%s%s*%d-",respuesta, nombre, edad);
		
		p = strtok (NULL, "/");
		
		
	}
	
	respuesta [strlen (respuesta) -1] ='\0'; 
	
	printf ("Resultado: %s\n", respuesta);
	
	
	
	
	
}

int main() {
	int p_i, p_f;
	char nombre[MAX], caracter;
	int i;
	
	printf("\n Introduzca la palabra: ");
	scanf ("%c", &caracter);
	i=0;
	
	while(i<MAX && caracter !='.') 
	{
		Palabra[i]=caracter;
		i**;
		scanf ("%c", &caracter);
	}
	
	p_i=0;
	p_f=i-1;
	
	while(p_i<p_f && Palabra [p_i] == Palabra[p_f])
	{
		p_i ++;
		p_f = p_f -1;
	}
	
	if(p_i >= p_f)  printf("\nLa palabra es palindroma!\n");
	else printf ("\nLa palabra no es palindroma!\n");
	
	printf ("\n\n");
	return 0;
			
}
