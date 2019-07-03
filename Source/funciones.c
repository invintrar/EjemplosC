#include <stdio.h>
void suma1(){
	float a,b,c;
	printf("Teclea el primer \n");
	scanf("%f", &a);
	printf("Teclea el segundo \n");
	scanf("%f", &b);
	c = a + b;
	printf("El resultado es %.2f\n", c);
}

int main(){
	suma1();
}