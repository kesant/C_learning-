#include <stdio.h>

int suma();
int main(){

    suma();
    suma();


    return 0;
}

int suma(){
    int a,b,c;
    static int resultado=0;//con esto la varibale resultado no va a 
    //adquirir el valor 0 la siguiente vez que se ejecute sino que va 
    //a tener el ultimo valor que se tuvo 
    a=1;
    b=2;
    c=3;

    resultado=resultado+a+b+c;
    return resultado;
}