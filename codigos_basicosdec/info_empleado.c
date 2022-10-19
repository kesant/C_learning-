#include <stdio.h>
int anioActual=2022;

#define PRECIO_HORAS_EXTRA 60;

int main (){/*indicamos que contendra la parte principal de nuestro codigo */
    int edad;
    int anioNacimiento;
    int horasExtraTrabajadas;
    float totalHorasExtrasAPagar;
    float sueldoAnual;
    int haRealizadoHorasExtras;
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




    return 0;
}