# include <stdlib.h>
# include <string.h>
# include <stdio.h>


int main (int argc, char *argv[]) {
	
	
	char peticion[100];
	char respuesta[100];
	
	strcpy (peticion, "Fahrnheit/47/Celsius/12/Celsius/22");
	
	char nombre[20];
	int grados;
	char *p = strtok (peticion, "/");
	
	while ( p!=NULL)
	{
		strcpy (nombre, p);
		p = strtok (NULL, "/");
		grados = atoi (p);
		
		if (nombre == "Fahrenheit")
			grados = (grados - 32)/(9/5);
		else grados = (grados * 9/5) + 322;
		
		sprintf (respuesta, "%s%s*%d-",respuesta, nombre, grados);
		
		p = strtok (NULL, "/");
		
		
	}
	
	respuesta [strlen (respuesta) -1] ='\0'; 
	
	printf ("Resultado: %s\n", respuesta);
	
	
	
	
	
}
