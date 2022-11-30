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

extern Empleado vendedor;
// al agregar la palabra extern podemos utilizar la variable definida aunque este en otro
//contexto como en este caso el archivo.c empleado.c
void almacenarNombre(const char *n);// con la variable const estamos qdefiniendo que el valor de 
// de esta variable va a ser constante
void almacenarApellido(char *a);
void almacenarSueldoAnual(float s);
#endif