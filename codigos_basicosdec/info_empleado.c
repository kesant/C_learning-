#include <stdio.h>
#define PRECIO_HORAS_EXTRA 60;// definimos una constante tmabien denomidado macro
#define BONIFICACION_DEPARTAMENTO_A 2750;
//los macros deben ir antes de las variables globales
int anioActual=2022;
float calcularSueldoAnual (float ingresosMnsualesDuranteUnAnio[]);//declaramos la funcion
int main (){/*indicamos que contendra la parte principal de nuestro codigo */
    int edad,anioNacimiento, horasExtraTrabajadas,haRealizadoHorasExtras;
    float totalHorasExtrasAPagar,sueldoAnual,sueldoTotalAnual,ingresosMnsualesDuranteUnAnio[12];
    char departamento;

    printf("\nA continuacion amos a pedirle algunos datos personales\n ");

    printf("Que edad tiene\n ?");
    scanf("%d",&edad);

    for(int mes=0; mes<12; mes++){
        printf("Cual es su sueldo para el mes %d?: ",mes+1);
        scanf("%f",&ingresosMnsualesDuranteUnAnio[mes]);       
    }

    printf("A que departamento pertenece?\n");
    scanf(" %c",&departamento);

    printf("Cuantas horas extras has trabajado este anio?: ");
    scanf("%d",&horasExtraTrabajadas);

    totalHorasExtrasAPagar=horasExtraTrabajadas*PRECIO_HORAS_EXTRA;
    anioNacimiento=anioActual-edad;

    haRealizadoHorasExtras=totalHorasExtrasAPagar;

    sueldoAnual=calcularSueldoAnual (ingresosMnsualesDuranteUnAnio);

    if (departamento =='A'||departamento =='a'){
        sueldoTotalAnual=sueldoAnual+BONIFICACION_DEPARTAMENTO_A;
    }
    return 0;
}


//funcion 
float calcularSueldoAnual (float ingresosMnsualesDuranteUnAnio[]){
        float sueldoAnual=0;
        for(int mes=0; mes<12; mes++){
        sueldoAnual=sueldoAnual+ingresosMnsualesDuranteUnAnio[mes];
    }
    return sueldoAnual;
}