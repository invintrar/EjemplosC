#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fich;
	int N;

	fich = fopen("ejemplo.txt", "rt");
	if(fich == NULL){
		printf("Error al abrir el archivo\n");
	}
	else{
		while(!feof(fich)){
			fscanf(fich, "%i\n", &N);
			printf("%i\n", N);
		}
		fclose(fich);
	} 	
	return 0;
}