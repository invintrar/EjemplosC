#include <stdio.h>

/* count lines in input */
main(){
	int c, nl;
	
	nl =0;
	while((c = getchar()) != EOF){
		if (c == '\t'){
			++nl;
			printf("%d\b", nl);
		}
	}
}