#include <stdio.h>

/* copy input to output; 2nd version */
main(){
	int c;
	int frecuencia;
	float valor;
	float valor1;
	int division;
	int division8;
	float freq ;
	frecuencia = 1;//Frecuencia que queremos en el timer
	freq = frecuencia;
	valor = 1/freq;
	valor1= (1/20000000.0)*4;
	division = valor/valor1;

	if(division > 65536){
		
		division = division/8;
		
		if(division > 65536){
			
			division = division/8;
			
			if(division > 65535){
				
				division = division/4;
				printf("Prescaler 1:256 = %d\n",division);
				
			}else{
				
				printf("Prescaler 1:64 = %d\n",division);				
			}
		}else{
			printf("Prescaler 1:8 = %d",division);
		}
		 		
	}else{
		printf("Prescaler 1:1 = %d\n",division);
	}
		
}
