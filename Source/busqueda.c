#include <stdio.h>

int main(){
	FILE *fich;
	int n_busq, n_leido, linea;
	int encontrado;
	fich = fopen("ejemplo.txt", "rt");
	if( fich == NULL )
		printf("Error al abrir el archivo\n");
	else{
		printf("Que numer desea buscar?\n");
		scanf("%i", &n_busq);
		linea = 0;
		encontrado = 0;
		while(!feof(fich)){
			linea ++;
			fscanf(fich, "%i\n", &n_leido);
			if (n_leido == n_busq){
				encontrado = 1;
				printf("He encontrado ese numero en la linea %i\n", linea);
				break;
			}
		}
		if (encontrado == 0)
			printf("Ese numero no esta en el archivo\n");
		fclose(fich);
	}
}