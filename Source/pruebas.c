#include <stdio.h>
#include <stdlib.h>
int main(){
	float x;
	int a;
	char cadena[50];
	printf("%Ingrese un numero real seguido de un enter\n");
	gets(cadena);
	a = atoi(cadena);
	x = atof(cadena);
	printf("%i\t%.2f\n",a, x);
	return 0;
}
