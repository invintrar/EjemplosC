#include <stdio.h>

int main(int argc, char const *argv[])
{
	char c;
	c = 128;
	c = c >> 2;
	printf("%d\n", c);
	return 0;
}