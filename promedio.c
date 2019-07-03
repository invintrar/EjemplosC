#include <stdio.h>
#include <conio.h>

int main(){
	float num, cuenta, sum;
	sum = 0; cuenta = 0;
	do{
		printf("\n dame un numero (para detener -1) ");
		scanf("%f", &num);
		sum = sum + num;
		cuenta = cuenta + 1;
	}while(num != -1);
	printf("\nEl promedio de los %.0f numeros es %.2f ",cuenta -1, sum-num/(cuenta - 1) );
	getch();
	return 0;
}