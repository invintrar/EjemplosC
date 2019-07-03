/* Ordenación rápida (QUICKSORT)
   NOTA: en esta implementación por simplicidad, el vector v es una variable global */
#include <stdio.h>

int v[10]= {1,9,4,2,6,8,3,5,7,10};

void ordena_vector(int iz, int de){
	int i, j, x, w;

	i= iz;
	j = de;

	x = v[ (iz + de)/2];

	do 
	{
		while(v[i] < x ) i++;
		while (x < v[j]) j--;

		if ( i <= j){
			w = v[i];
			v[i] = v[j];
			v[j] = w;
			i++;
			j--;
		}
	}
	while (i <= j);

	w = v[i];
	v[i] = v [de];
	v[de] = w;

	if ( iz < j) ordena_vector(iz, j);
	if ( i < de) ordena_vector(i, de);
}

/* Búsqueda secuencial
   Buscamos el elemento "dato" en el vector "v"
   Devolvemo la posición donde está "dato" o, si no lo encontramos, -1
*/
int buscar(int LONGITUD_VECTOR, int dato){
	int i = 0;
	int x = -1;

	while((i < LONGITUD_VECTOR) && (x == - 1)){
		if (v[i] == dato)	//Lo hemos encontrado
			x = i;
		i++;
	}

	return x;
}

int main(){
	int i,valor,valorB;
	for(i = 0; i<10; i++)
		printf("%d\t",v[i]);
	printf("\n");
	ordena_vector(0,9);
	for(i = 0; i < 10; i++)
		printf("%d\t", v[i]);
	printf("\n");
	printf("%s\n","Ingrese un numero a buscar" );
	scanf("%d", &valorB);
	printf("%s %d\n","Buscamos el numero:",valorB);
	valor = buscar(10, valorB);

	if (valor != -1)
		printf("El valor %d se encuentra en la posicion %d del vector\n",valorB,valor);
	else
		printf("%s%d\n","No se encontro el valor: ",valorB );
	

}