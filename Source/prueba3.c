#include <stdio.h>
#include <stdlib.h>

int main(){
	int j=4, k = 3, i = 2;
	float x = 1.5, z = 2.4, t;

	t= ((float)(j%k)/2);

	t++;
	x *= ++z;
	t -= (x += ++i);
	printf("\nEl valor de t es %f\n", t);
}