#include <stdio.h>

int main (){/*indicamos que contendra la parte principal de nuestro codigo */
    int edad;
    float sueldoAnual;
    char departamento;

    printf("\nA continuacion amos a pedirle algunos datos personales\n ");

    printf("Que edad tiene\n ?");
    scanf("%d",&edad);

    printf("Cual es el sueldo anual\n?");
    scanf("%d",&sueldoAnual);

    printf("A que departamento pertenece?\n");
    scanf(" %c",departamento);


    return 0;
}