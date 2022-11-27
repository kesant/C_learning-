#include <stdio.h>

buscarPosicionDe(char character, char texto[]);
int main (){

    char texto[50]="linkedin";
    printf("la letra k se encuentr en la posicion %d",1+buscarPosicion('k',texto));

    return 0;




}

int buscarPosicionDe(char character, char texto[]){

    int posicion=0;
    while(texto[posicion] != '\0' && texto[posicion] != character){
        posicion++;
    }

    if (texto[posicion]== '\0') posicion =-1;

    return posicion;


}