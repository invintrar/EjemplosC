#include <stdio.h>

int factorial(int n);

int main(){
	int fa;
	fa = factorial(4);
	printf("%i\n", fa);

	return 0;
}

int factorial(int n){
	int result;
	if(n == 1)
		result = 1;
	else{
		result = n * factorial(n-1);
		return result;
	}
}