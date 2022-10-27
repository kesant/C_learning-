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
//uso de la funcion STRCMP
	char pasword[200];
	char pasword2[200];
	int comparacion=strcmp(pasword,pasword2);//devuelve 3 numeros enteros
if (comparacion ==0)puts("ambas cadenas son iguales");
else puts("Las contrasenas son diferentes");
//uso de STRCHR
	char origen[]="eliezerlopez@linkedin.com";
	char *direccion =strchr(origen,"@");
	//si la cadena no tiene el caracter la direccion de memoria tiene el valor NULL 
//USO DE STRSTR
char origen[]="eliezerlopez@linkedin.com";
char proveedor[]="eliezerlopez.com";
char *dominio =strstr(origen,proveedor);
/*
en caso que la cadena de memoria no se cuentre la variable 
almacenada toma el valor NULL.
*/

return 0;
}