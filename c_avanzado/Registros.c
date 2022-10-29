#include <stdio.h>

int main(){
	typedef struct{
//escribiremos datos que identifiquen empleados
			int identificador;
			char *nombre;
			char *apellidos;
			float sueldoAnual;
}Empleado;
// no se estan declarando nuevas variables ,estamos creandouna structura nueva
//que nos permitira trabajar con tipos de datos personalizados
//inizializar un registro 
//nombreDeRegistro nombreariable;
Empleado profesor;
//inicializar cada uno de los campos de la variable profesor 
profesor.identificador=1994;
profesor.nombre="Eliezer";
profesor.apellidos="lopez Rodriguez";
profesor.sueldoAnual=70500.48;

printf("%s",profesor.nombre);
profesor.sueldoAnual=profesor.sueldoAnual+3500.50;
profesor.sueldoAnual+=3500.50;

//otra forma de crear registros
//otra forma de declarar registros
struct Empleado2 {
			int identificador;
			char nombre[50];
			char apellidos[150];
			float sueldoAnual;
};
//declarar registros de esta manera
struct Empleado2 recepcionista;


	return 0;
}