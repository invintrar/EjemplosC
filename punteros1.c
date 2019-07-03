#include <stdio.h>

int main(int argc, char const *argv[])
{
	char a;
	a= 0x10;
	a <<= 0;
	printf("%X\n", a);
	return 0;
}