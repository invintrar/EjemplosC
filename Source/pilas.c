#include <stdio.h>
#include <stdlib.h>

struct s_nodo{
	int dato;
	struct s_nodo *siguiente;
};
typedef struct s_nodo t_nodo;
t_nodo *primero;

void push(t_nodo **primero, int v){
	t_nodo *nuevo;
	nuevo = (t_nodo*)malloc(sizeof(t_nodo));	//Creamos nodo nuevo
	nuevo->dato = v;							//Insertamos el dato en el nodo
	nuevo->siguiente = *primero;				//La cima a partir de ahora sera "nuevo"
	*primero = nuevo;

}

int pop(t_nodo **primero){
	t_nodo *aux;	//Variable auxiliar para manipular el nodo
	int v;			//Variable auxiliar para devolver el valor del dato
	aux = *primero;
	if(aux == NULL)	//Si no hay elementos en la pila devolvemos algun valor especial
		return -1;
	*primero = aux->siguiente;	//La pila empezara ahor a partir del siguiente elemento
	v = aux->dato;				//Este el el dato que ocupa la cima hasta ahora
	free(aux);					//Liberamos la memoria ocupada la anterior cima 
	return v;
}

int main(){
	int valor;
	t_nodo nodo;
	t_nodo *pn;
	t_nodo **ppn;
	pn = &nodo;
	ppn = &pn;
	push(ppn,12);
	push(ppn,24 );
	valor = pop(ppn);
	printf("%i\n", valor);
	valor = pop(ppn);
	printf("%i\n", valor);
	valor = pop(ppn);
	if(valor == -1)
		printf("Pila vacia\n");
	valor = pop(ppn);
	if(valor == -1)
		printf("Pila vacia\n");
	return 0;
}