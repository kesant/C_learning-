#include <stdio.h>
int main(){
	int identificadoresEmpleados[10];
	&identificadoresEmpleados[0];//direccion del primer elemento en la primera posicion
	identificadoresEmpleados;//obtenemos la direccion de memoria del elemento, el primer elemento del array
	&identificadoresEmpleados[8];
	identificadoresEmpleados+8;//obtenemos la direccion de memoria del noveno elemento
	
	&identificadoresEmpleados[8];
	identificadoresEmpleados[8];//obtenemos el noveno elemento
	*(identificadoresEmpleados+8);//obtenemos el noveno elemento
	//esta ultimo enunciado es el mas eficiente en compilacion

	//para arrays y punteros de varias dimensiones 
	float sueldoMensualesEmpleados[10][12];
	int (*sueldosEmpleados)[12];
	
	sueldoMensualesEmpleados[4][5];
	*(*(sueldosEmpleados+4)+5);
}