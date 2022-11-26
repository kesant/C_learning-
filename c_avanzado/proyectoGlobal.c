#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
    char *nombre;
    char *apellidos;
    float sueldoAnual;

}Empleado;
Empleado vendedor;
//declaramos las funciones 
almacenarNombre(char *n);
almacenarApellido(char *a);
almacenarSueldoAnual(float s);
int main(){
    char nombreTemporal[100];
    char apellidosTemporal[250];

    puts("Por favor , Introduce la siguiente informacion : ");
    printf("-Nombre: ");
    gets(nombreTemporal);//para la lectura de cadena de caracteres


    printf("-Apellidos: ");
    gets(apellidosTemporal);




//creamos un registro de tipo empleado que contenga los campos nombre y apellido.


//almacenamos de forma temporal en una variable propia mediante el uso de registros 2 arrays dinamicos que ocupan exactamente el espacio que deben ocupar 

    return 0;
}

void almacenarNombre(char *n){
   vendedor.nombre=(char*)malloc(strlen(nombreTemporal)*sizeof(char));
   vendedor.nombre=strcpy(vendedor.nombre,n);

}
void almacenarApellido(char *a){
   vendedor.apellidos=(char*)malloc(strlen(apellidosTemporal)*sizeof(char));    vendedor.nombre=strcpy(vendedor.nombre,n);
    vendedor.apellidos=strcpy(vendedor.apellidos,a);//nos permite copiar en una cadena el contenido de otra
}
void almacenarSueldoAnual(float s){
    vendedor.sueldoAnual=s;
}