#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fich;
	int i, N;

	fich = fopen("ejemplo.txt","at");
	if(fich == NULL )
		printf("Error al abrir el archivo\n");
	else
	{
		for(i = 0; i < 10; i++){
			N = rand() + 1;
			fprintf(fich, "%i\n", N);
		}
		fclose(fich);
		printf("Correctamente guardado\n");
	}
	return 0;
}