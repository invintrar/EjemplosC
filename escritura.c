#include <stdio.h>

/*Archivo y caracteres.
El programa escribe caracteres en un archivo. */

int main(){
	char p1;
	FILE *ar;
	ar = fopen("arc.txt", "a+");
	if(ar != NULL){
		printf("Ingrese Texto que se guardara en el archivo\n");
		while((p1 = getchar()) != '\n')
			/* Se escribe caracteres en el archivo mientras no se detecte el 
			caracter indicado el fin de la línea. */
			fputc(p1, ar);
		fclose(ar);
	}
	else
	{
		printf("No se puede abri el archivo\n");
	}
	getchar();
}