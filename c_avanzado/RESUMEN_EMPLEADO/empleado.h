#ifndef EMPLEADO_H
#define EMPLEADO_H


#include<stdlib.h>
#include<string.h>



typedef struct 
{
    char *nombre;
    char *apellidos;
    float sueldoAnual;

}Empleado;
void almacenarNombre(char *n);
void almacenarApellido(char *a);
void almacenarSueldoAnual(float s);
#endif