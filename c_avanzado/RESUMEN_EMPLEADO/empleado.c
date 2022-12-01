#include "empleado.h"
#include <stdio.h>




FILE *vendedor;



void almacenarNombre(const char *n){
    vendedor= fopen("empleado.txt","at");//abre un canal de comunicacion hasta nuestro archivo 
    fclose(vendedor);
   vendedor.nombre=(char*)malloc(strlen(n)*sizeof(char));
   vendedor.nombre=strcpy(vendedor.nombre,n);

}
void almacenarApellido(char *a){
    vendedor= fopen("empleado.txt","at");
    fclose(vendedor);
   vendedor.apellidos=(char*)malloc(strlen(a)*sizeof(char));    vendedor.nombre=strcpy(vendedor.nombre,n);
    vendedor.apellidos=strcpy(vendedor.apellidos,a);//nos permite copiar en una cadena el contenido de otra
}
void almacenarSueldoAnual(float s){
    vendedor= fopen("empleado.txt","at");
    fclose(vendedor);
    vendedor.sueldoAnual=s;
}