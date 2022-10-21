#include <stdio.h>
#define PRECIO_HORAS_EXTRA 60;// definimos una constante tmabien denomidado macro
#define BONIFICACION_DEPARTAMENTO_A 2750;
//los macros deben ir antes de las variables globales
int anioActual=2022;

int main (){/*indicamos que contendra la parte principal de nuestro codigo */
    int edad,anioNacimiento, horasExtraTrabajadas,haRealizadoHorasExtras;
    float totalHorasExtrasAPagar,sueldoAnual,sueldoTotalAnual;
    char departamento;

    printf("\nA continuacion amos a pedirle algunos datos personales\n ");

    printf("Que edad tiene\n ?");
    scanf("%d",&edad);

    printf("Cual es el sueldo anual\n?");
    scanf("%d",&sueldoAnual);

    printf("A que departamento pertenece?\n");
    scanf(" %c",&departamento);

    printf("Cuantas horas extras has trabajado este anio?: ");
    scanf("%d",&horasExtraTrabajadas);

    totalHorasExtrasAPagar=horasExtraTrabajadas*PRECIO_HORAS_EXTRA;
    anioNacimiento=anioActual-edad;

    haRealizadoHorasExtras=totalHorasExtrasAPagar;

    if (departamento =='A'||departamento =='a'){
        sueldoTotalAnual=sueldoAnual+BONIFICACION_DEPARTAMENTO_A;


    }



    return 0;
}