#include "empleado.h"






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