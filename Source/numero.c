/*Positivo, negativo o cero*/
#include <stdio.h>
#include <conio.h>

int main(){
	int num;
	printf("Indica si el numero es positivo, negativo o cero\n");
	printf("Dame el numero\n");
	scanf("%d", &num);
	if(num == 0 )
		printf("Es cero\n");
	else
		if(num > 0 )
			printf("Es positivo\n");
		else
			printf("Es negativo\n");
	getchar();
	return 0;
}