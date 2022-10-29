#include <stdio.h>

#include <stdlib.h>

int main(){

//	int empleados[600];
//declarar un vector de memoria dinamica;
//malloc(#numero de eleemntos inicial deseado*lo que ocupa un elemento en cuestion)
//malloc nos devolvera un puntero avoid que necesitaremos convertir de un puntero a entero para poder trabajar   
//con (int*)	
	int *empleados=(int*) malloc(500*sizeof(int));

	return 0;
}