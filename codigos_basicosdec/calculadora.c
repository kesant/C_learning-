#include <stdio.h>

int main (){

    int operando1,operando2;
    printf("\n\n");

    printf("introduce dos numeros enteros : \n");
    printf("Numero 1: ");
    scanf("%d",&operando1);

    printf("numero 2 : ");
    scanf("%d",&operando2);

    printf("Resultados: \n");
    printf("suma : %d\n",operando1+operando2);
    printf("resta : %d\n",operando1-operando2);
    printf("multiplicacion : %d\n",operando1*operando2);
    printf("division : %f\n",operando1/operando2);
    printf("resto : %d\n",operando1%operando2);

    printf("\n\n");

    return 0;
}