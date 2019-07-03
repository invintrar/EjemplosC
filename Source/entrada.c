#include <stdio.h>

int main(){
	int edad;
	float est;
	printf("Teclea tu edad: ");
	scanf("%d", &edad);
	printf("Telcea tu estatura: ");
	scanf("%f",&est);
	printf("\n");
	printf("Tienes %d anos y mides %.2f mts.\n", edad, est);
}