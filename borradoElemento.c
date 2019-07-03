#include <stdio.h>

int main(){
	FILE *f_orig, *f_nuevo;
	int N, linea;
	f_orig = fopen("ejemplo.txt", "rt");
	f_nuevo = fopen("temporal", "wt");

	if((f_orig = NULL) || (f_nuevo == NULL))
		printf("Error al abrir los archivos\n");
	else{
		linea = 0;
		while(!feof(f_orig)){
			linea++;
			fscanf(f_orig, "%i\n", &N);
			if(linea != 9)
				fprintf(f_nuevo, "%i\n", N);
		}
		fclose(f_orig);
		fclose(f_nuevo);
		remove("ejemplo.txt");
		rename("temporal", "ejemplo.txt");
	}
}