#include <stdio.h>
#include <stdlib.h>

int main(){
	int *x, i;
	/* Asignacion de memoria dinamica en C */
	x = (int *) malloc (100 * sizeof(int));
	/*Comprobaciion si la asignacion fue correcta */
	if (x == NULL)
		printf("Error en la asignacion de memoria\n");
	else{
		printf("Se ha reservado con exito espacio para 100 numeros\n");
		for(i = 0; i < 100; i++){
			printf("Introduzca el elemento %i del arreglo: ");
			scanf("%i", &x[i]);
		}
		free(x);//Para liberar la memoria que no vamos a utilizar
	}
	return 0;
}