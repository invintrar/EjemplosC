#include <stdio.h>
 
int main ( int argc, char **argv )
{
 	FILE *fp;
 	
 	char buffer[100] = "Esto es un texto dentro del fichero.";
 	
 	fp = fopen ( "fichero.txt", "a" );
 	
 	fprintf(fp, "%6s%6s%6s\n", "Eje X","Eje Y", "Eje Z");
 	for (int i = 0; i < 10; ++i)
 	{
 		fprintf(fp, "%6d%6d%6d\n", i+10,i+20, i+30);
 	}

 	
 	fclose ( fp );
 	
 	return 0;
}