#include <stdio.h>

int main(){
	int a = 0xA3;
	float b = 8.2;
	char c = 's';
	float v = 1/5;

	printf("%X\0", a);
	printf("%i\a", a+b); 
	printf("%f\n", a+b);
	printf("%c\n", c);
	printf("%f\n", v);

	return 0;
}