#include "empleado.h"
#include <stdio.h>
#include<string.h>



FILE *vendedor;



void almacenarNombre(const char *n){
    vendedor= fopen("empleado.txt","at");//abre un canal de comunicacion hasta nuestro archivo 
    if (vendedor != NULL){

        fputs(n,vendedor);
        fputs("\n",vendedor);
    }
    
    
    fclose(vendedor);
//    vendedor.nombre=(char*)malloc(strlen(n)*sizeof(char));
//    vendedor.nombre=strcpy(vendedor.nombre,n);

}
void almacenarApellido(char *a){
    vendedor= fopen("empleado.txt","at");
    if (vendedor != NULL){

        fputs(a,vendedor);
        fputs("\n",vendedor);
    }
    
    fclose(vendedor);
//    vendedor.apellidos=(char*)malloc(strlen(a)*sizeof(char));    vendedor.nombre=strcpy(vendedor.nombre,n);
//     vendedor.apellidos=strcpy(vendedor.apellidos,a);//nos permite copiar en una cadena el contenido de otra

}
void almacenarSueldoAnual(float s){
    vendedor= fopen("empleado.txt","at");
        if (vendedor != NULL){

        fprintf(vendedor,"%f",s);
        fputs("\n",vendedor);
    }
    
    fclose(vendedor);
    // vendedor.sueldoAnual=s;
}
void MostrarAgradecimiento(){
    char mensaje[250]="Gracias por introducir la informacion del empleado cuyo nombre es :";
    char nombre[150];
    vendedor=fopen("empleado.txt","rt");
    fgets(nombre,300,vendedor);//la variablle nombre almacenara la primera linea que se encuentra en nuestro documento de texto
    strcat(mensaje,nombre);
    puts(mensaje);
    fclose();


}