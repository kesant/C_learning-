/*Modelado de datos */
#include  <stdio.h>

int main(){
    int edad;
    int numeroDeAcciones=150;

    float ahorrosEnElBanco=10000.46;

    char primeraLetraNombre='E';
    char primeraLetraApellido='L';
    char primeraLetraApellido2='R';
    printf("El inversor %c%c%c tiene %d anos , ha adquirido %d acciones durante los ultimos meses \n y posee una cantidad ahorrada equivalente a %.2f $"
    ,primeraLetraNombre,primeraLetraApellido,primeraLetraApellido2,edad,numeroDeAcciones,ahorrosEnElBanco);
    return 0;
}