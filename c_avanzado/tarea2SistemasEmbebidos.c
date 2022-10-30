#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float calculoDescuento(char inicialProducto[],float costo[],int cantidadProductos);
int main (){
    puts("*************************BIENVENIDO AL DISPENSADOR DE SODAS****************************");
    puts("                             MENU                                        ");
    puts("A.-Pepsi\t0.25$");
    puts("B.-Coca cola\t0.35$");
    puts("C.-Inca cola\t0.20$");
    puts("D.-Fanta\t0.25$");
    puts("E.-Sprite\t220.30$\n");

    int cantidadProductos,terminador=1;
    char inicialProducto[]={'A','B','C','D','E'};
    float costo[]={0.25,0.35,0.20,0.25,0.30};
    char producto;

    puts("Ingresa la cantidad de productos que quiere comprar: ");
    scanf("%d",&cantidadProductos);//ingreso de datos por el usuario
    float *productos=(float*)malloc(cantidadProductos*sizeof(float));
    puts("Ingrese la opcion del producto que desee comprar: ");
    for(int i=0;i<cantidadProductos;i++){
        printf("Producto # %d\n",i+1);
        do{
            scanf(" %c",&producto);
            if(strchr(inicialProducto,producto)==NULL){
                puts("Ha ingresado una opcion incorrecta vuelva a intentarlo: ");
            }
        }while(strchr(inicialProducto,producto)==NULL);
        productos[i]=producto;
    }
    float costoValor=calculoDescuento(inicialProducto, costo,cantidadProductos);
    printf("%.2f",costoValor);
}


float calculoDescuento(char inicialProducto[],float costo[],int cantidadProductos){
    int A=0,B=0,C=0,D=0,E=0,contadorDescuento=0;
    float costoTotal=0;
    for (int i=0;i<cantidadProductos;i++){
        switch(inicialProducto[i]){
            case 'A': 
            costoTotal+=costo[0];
            A+=1;
            if (A>=5){
                contadorDescuento+=1;
            }
            break;
            case 'B':
            costoTotal+=costo[1];
            B+=1;
            if (B>=5){
                contadorDescuento+=1;
            }            
            break;
            case 'C':
            costoTotal+=costo[2];
            C+=1;
            if (C>=5){
                contadorDescuento+=1;
            }
            break;
            case 'D':
            costoTotal+=costo[3];
            D+=1;
            if (D>=5){
                contadorDescuento+=1;
            }
            break;
            case 'E':
            costoTotal+=costo[4];
            E+=1;
            if (E>=5){
                contadorDescuento+=1;
            }
            break;
            default: /*accion por defecto */ break;
        }
    }
    if (contadorDescuento>0){
        costoTotal=costoTotal*1.15;
    }
    return costoTotal;

}