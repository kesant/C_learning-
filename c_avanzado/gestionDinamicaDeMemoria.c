#include <stdio.h>

#include <stdlib.h>

int main(){

//	int empleados[600];
//declarar un vector de memoria dinamica;
//malloc(#numero de eleemntos inicial deseado*lo que ocupa un elemento en cuestion)
//malloc nos devolvera un puntero avoid que necesitaremos convertir de un puntero a entero para poder trabajar   
//con (int*)	
	int *empleados=(int*) malloc(500*sizeof(int));
//Arrays dinamicos en C
	int numProductos;
	printf("Cuantos productos vendiste ayer ?:");
	scanf("%d",&numProductos);
	float *numProductosVendidos=(float*)malloc(numProductos*sizeof(float));
	for (int i =0;i<numProductos;i++){
		printf("Introduce el precio del producto %d :",i+);
		scanf("%f",&numProductosVendidos[i]); 
    }
//como liberar memoria asignada en C 
/*si continuamente reservamos memoria y no elminamos memoria que no necesitamos podriamos llegar a agotar la memoria disponible.*/
	int *array1=(int*)malloc(150*sizeof(int));
	float *array2= (int*)malloc(150*sizeof(int));
	char *array3=(char*)malloc(150*sizeof(char));
	//liberar memoria reservada con la funcion free()
	free(array1);
	free(array2);
	free(array3);
	return 0;
}