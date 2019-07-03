#include <stdio.h>

int main(int argc, char const *argv[])
{
	if(argc < 3)
		printf("Ingrese su nombre completo\n");
	else if(argc > 3)
		printf("Demaciados parametros\n");
	else 
		printf("Hola %s %s\n",argv[1], argv[2]);
	return 0;
}