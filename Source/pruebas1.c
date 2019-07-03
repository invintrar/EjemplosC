#include <stdio.h>
 
 int main(){
 	char i,j;
 	int temp;
 	int vector[10] = {2, 3,1,5,4,9,8,10,7}; 
 	//printf("%d\n", (vector));
 	for(i = 0 ; i<10; i++){
 		printf("%d\t",vector[i]);
 	}
 	printf("\n");
 	for(i = 0; i<10 ; i++){
 		for(j = 0 ; j<10 ; j++){
 			if(vector[i] < vector[j]){
 				temp = vector[j];
 				vector[j] = vector[i];
 				vector[i] = temp;
 			}

 		}
 	}
 	for(i = 0 ; i<10; i++){
 		printf("%d\t",vector[i]);
 	}
 	printf("\n");
 	return 0;
 }