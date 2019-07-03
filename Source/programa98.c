#include <stdio.h>

/*Alumnos. 
El programa almacena variables de tipo estructura alumno en un archivo. */

typedef struct 
{
	int matricula;
	char nombre[20];
	int carrera;
	float promedio;
}alumno;

void escribe(FILE *);	/* Prototipo de función. */

int main (){
	FILE *ar;
	if((ar = fopen("ad1.dat", "a+")) != NULL)
		escribe(ar);
	else
		printf("\nEl archivo no se puede abrir");
	fclose(ar);
	getchar();
}

void escribe(FILE *ap){
	/*Esta función sirve para leer los datos de los alunos utilizando una
	estructura tipo alumno, que se almacenará posteriormente en un archivo. */
	alumno alu;
	int i = 0, r;
	printf("\nDesea ingresar informacion sobre alumnos? (Si-1 No-0): ");
	scanf("%d", &r);
	while(r){
		i++;
		printf("Matricula del alumno %d: ", i);
		scanf("%d", &alu.matricula);

		printf("Nombre del alumno %d: ", i);
		fflush(stdin);
		gets(alu.nombre);

		printf("Carrera del alumno %d: ", i);
		scanf("%d", &alu.carrera);

		printf("Promedio del alumno %d: ", i);
		scanf("%f", &alu.promedio);

		fwrite(&alu, sizeof(alumno), 1, ap);
		/*Observe que la funcion fwrite tiene cuatro argumentos. el primero se 
		utiliza para indicara la variable tipo estructura que se deas almacenar; el 
		segundo muestra el tamaño de esa variable en términos de bytes; el tercero 
		señala el número de variables que se leerán o almacenarán en el dispositivo
		de almacenamiento secundario, y el último representa el apuntador al inicio de
		la estructura FILE. */

		printf("\nDesaea ingresar informacion sobre mas alumnos? (Si-1 No-0): ");
		scanf("%d", &r);
	}
}