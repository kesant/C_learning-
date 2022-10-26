#include <string.h>
int main(){
	char nombre[15];
    char copia[15];
    //char copia[15]=nombre[15];//si hacemos esto le estamos dando un puntero en la posicion 15
	strcpy(copia,nombre);
//nombre es la cadena de caracteres de origin y copia es la cadena de caracterees a la que se va a copiar el contenido

/////USO DE STRCAT
	char nombreCompleto[20]="Eliezer Lopez";
	char mensajeDeBienvenida[150]="Hola";
	
	strcat(mensajeDeBienvenida,nombreCompleto);
//hola Eliezer Lopez
return 0;
}