#include <stdio.h>


int main(){

    FILE *prueba;
    prueba=fopen("prueba.txt","at");


    if (prueba !=NULL){//verificamos que hemos establecido un canal de comunicacion de manera correcta 
        putc('E',prueba);//para escribir caracteres
        // se coloca el caracter y el puntero al archivo al que deseamos escribir

    }  
    fclose(prueba);

    return 0;
}