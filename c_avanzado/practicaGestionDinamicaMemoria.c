#include<stdio.h>
#include<stdlib.h>

int main (){
	int numeroDeTemperaturas=1,contador=0;
	float temperatura,total=0;
	float *temperaturas=(float*)malloc(numeroDeTemperaturas*sizeof(float));
	while(1){
		printf("\nInserta la temperatura: ");
		scanf("%f",&temperatura);
		total+= temperatura;
//almacenamos la temperatura recogida en un vector dinamico
		temperaturas[contador]=temperatura;
		contador++;
		printf("La temperatura promedio actul es : %.2f\n",(total/contador));
//incrementar el vector en una unidad el limite de almacenamiento.

		if (contador==numeroDeTemperaturas){
			 numeroDeTemperaturas++;
			 temperaturas= realloc(temperaturas,numeroDeTemperaturas*sizeof(float));	
		}
		for (int i=0;i<contador;i++){
			printf("%2.f ",temperaturas[i]);
		} 
}
//deseamos mostrar en pantalla la temperatura promedio
return 0;
}
