#include <stdio.h>

int main(int argc, char const *argv[])
{
	if (argc < 3)
		printf("Ha olvidado escribir su nombre\n");
	else if ( argc > 3)
		printf("Error, demasiados paramentros \n");
	else
		printf("Hola, %s %s\n",argv[1],argv[2]);
	return 0;
}