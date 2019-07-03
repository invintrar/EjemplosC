/*Año Bisiesto */
#include <stdio.h>
#include <conio.h>

int main(){
	int anio;
	printf("Indica si el anio en que naciste fue bisiesto\n\n");
	printf("En que anio naciste ");
	
	scanf("%d", &anio);
	
	if( (anio % 4) == 0 )
		printf("El anio en que naciste es bisiesto\n\n");
	else
		printf("El anio en que naciste NO es bisiesto\n\n");
	
	getchar();
	return 0;
}