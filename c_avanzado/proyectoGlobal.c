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



    return 0;
}