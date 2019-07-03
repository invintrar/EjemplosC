#include <stdio.h>

void intercambiar1(int a, int b){
	int tmp = a;
	a = b;
	b = tmp;
}

void intercambiar2(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


int main(){
	int dato1 = 30, dato2 = 90;
	printf("Antes de la llamada a las funciones dato1 = %i, dato2 = %i\n", dato1, dato2);
	intercambiar1(dato1, dato2);
	printf("Despues de intercambiar1: dato1 = %i, dato2 = %i\n", dato1, dato2);
	intercambiar2(&dato1, &dato2);
	printf("Despues de intercambiar2: dato1 = %i, dato2 = %i\n", dato1, dato2);
	intercambiar1(dato1, dato2);
	printf("Despues de intercambiar1: dato1 = %i, dato2 = %i\n", dato1, dato2);
	return 0;
}