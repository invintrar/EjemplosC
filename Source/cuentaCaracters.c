#include <stdio.h>
#include <conio.h>

int main(){
	int CuentaCar = 0;
	char Cadena;
	while(Cadena != EOF){
		Cadena = getchar();
		if(Cadena == 'a'){
			++CuentaCar;
		}
	}
	printf("\n Aparecieron %d veces la letra a", CuentaCar);
	getchar();
	return 0;
}