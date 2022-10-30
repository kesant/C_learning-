#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calculoDescuento(char inicialProducto[],float costo[],int cantidadProductos,float *costoTotal1,float *costoDescuento,float *descuento);
void informe(char inicialProducto[],int cantidadProductos,float costoValor1,float costoDescuento,float descuento);
int main (){
    puts("*************************BIENVENIDO AL DISPENSADOR DE SODAS****************************");
    puts("                             MENU                                        ");
    puts("A.-Pepsi\t0.25$");
    puts("B.-Coca cola\t0.35$");
    puts("C.-Inca cola\t0.20$");
    puts("D.-Fanta\t0.25$");
    puts("E.-Sprite\t0.30$\n");
    puts("AL COMPRAR 5 PRODUCTOS IGUALES OBTIENE UN DESCUENTO DEL 15 PORCIENTO");
    int cantidadProductos,terminador=1;
    char inicialProducto[]={'A','B','C','D','E'};
    float costo[]={0.25,0.35,0.20,0.25,0.30};
    char producto;
    float costoTotal1,costoDescuento,descuento;
    char confirmacion;
    puts("Ingresa la cantidad de productos que quiere comprar: ");
    scanf("%d",&cantidadProductos);//ingreso de datos por el usuario
    //ESTAMOS UTILIZANDO MANEJO DINAMICO DE ARRAYS EN MEMORIA PARA REESTRABLECER EL TAMANIO DEL ARRAY CON LAS FUNCIONES MALLOC Y REALLOC
    char *productos=(char*)malloc(cantidadProductos*sizeof(char));
    while(terminador){
        printf("Usted quiere comprar %d bebidas, desea continuar ?Y/N (Mayusculas only): \n",cantidadProductos);
        scanf(" %c",&confirmacion);
        if (confirmacion=='Y'){
            terminador=0;
        }else{
            puts("Ingresa la cantidad de productos que quiere comprar: ");
            scanf("%d",&cantidadProductos);//ingreso de datos por el usuario
            productos= realloc(productos,cantidadProductos*sizeof(char));    
        }
    }
    puts("Ingrese la opcion del producto que desee comprar(Mayusculas only): ");
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




    calculoDescuento(productos,costo,cantidadProductos,&costoTotal1,&costoDescuento,&descuento);
    informe(productos,cantidadProductos,costoTotal1,costoDescuento,descuento);
}


float calculoDescuento(char inicialProducto[],float costo[],int cantidadProductos,float *costoTotal1,float *costoDescuento,float *descuento){
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
        *costoDescuento=costoTotal*0.85;
        *descuento=costoTotal*0.15;
        *costoTotal1=costoTotal;
    }else{
        *costoDescuento=0.0;
        *descuento=0.0;
        *costoTotal1=costoTotal;
    }
    return 0;

}
void informe(char inicialProducto[],int cantidadProductos,float costoValor1,float costoDescuento,float descuento){
    puts("#############################################################");
    puts("\t\t***********************Factura***********************\t\t");
    printf("Tus productos son : \n");
    puts("Producto\tPrecio");
        for (int i=0;i<cantidadProductos;i++){
        switch(inicialProducto[i]){
            case 'A': 
            puts("Pepsi\t\t0.25$");
            break;
            case 'B':
            puts("Coca cola\t0.35$");       
            break;
            case 'C':
            puts("Inca cola\t0.20$");
            break;
            case 'D':
            puts("Fanta\t\t0.25$");
            break;
            case 'E':
            puts("Sprite\t\t0.30$");
            break;
            default: /*accion por defecto */ break;
        }
    }
    puts("#############################################################");
    printf("total\t\t%.2f\n$",costoValor1);
    printf("descuento\t%.2f\n$",descuento);
    printf("total a pagar\t%.2f\n$",costoDescuento);
    puts("#############################################################");
    printf("\t\tGRACIAS POR SU COMPRA");

}