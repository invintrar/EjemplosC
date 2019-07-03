#include <stdio.h>

#define salida 0
#define continua 1

main(){
	char c;
	while((c = getchar())!= EOF) {
		putchar(c);
		if(c == ' '){
			printf("\n");
		}
		
	}
}
