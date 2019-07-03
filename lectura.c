#include <stdio.h>

/* Archivos y caracters.
El programa lee caracteres de un archivo. */

int main(){
	char p1;
	FILE *ar;
	if((ar = fopen("arc.txt", "r")) != NULL) /*Se abre el archivo para lectura. */
	{
		while (!feof(ar))
			/*Se leen caracter del archivo mientras no se detecte el fin del archivo. */
		{
			p1 = fgetc(ar);		/* Lee el caracter del archivo. */
			putchar(p1);		/*Despliega el caracter en la pantalla. */
		}
		fclose(ar);
	}
	else
	{
		printf("No se puede abrir el archivo\n");
	}
	getchar();
}