#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char nombreTemporal[100];
    char apellidosTemporal[250];

    puts("Por favor , Introduce la siguiente informacion : ");
    printf("-Nombre: ");
    gets(nombreTemporal);


    printf("-Apellidos: ");
    gets(apellidosTemporal);
//creamos un registro de tipo empleado que contenga los campos nombre y apellido.
typedef struct 
{
    char *nombre;
    char *apellidos;

}Empleado;
Empleado vendedor;
vendedor.nombre=(char*)malloc(strlen(nombreTemporal)*sizeof(char));
vendedor.apellidos=(char*)malloc(strlen(apellidosTemporal)*sizeof(char));
//almacenamos de forma temporal en una variable propia mediante el uso de registros 2 arrays dinamicos que ocupan exactamente el espacio que deben ocupar 

    return 0;
}