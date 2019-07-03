/*Area de un trapecio*/
#include <stdio.h>
#include <conio.h>

int main(){
	float b,B,h,r;
	//clrscr();
	printf("Inserte la medida de la base menor\n\a");
	scanf("%f", &b);
	printf("Inserte la medida de la base mayor\n\a");
	scanf("%f", &B);
	printf("Inserte la altura de su trapecio\n\a");
	scanf("%f", &h);
	r = (b+B)*h/2;
	printf("El area de su trapecio es %.2f\n", r);
	getch();
	return 0;
}