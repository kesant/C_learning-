int main(){
    char nombreTemporal[100];
    char apellidosTemporal[250];
    float sueldoAnualTemporal;
    puts("Por favor , Introduce la siguiente informacion : ");
    printf("-Nombre: ");
    gets(nombreTemporal);//para la lectura de cadena de caracteres
    almacenarNombre(nombreTemporal);

    printf("-Apellidos: ");
    gets(apellidosTemporal);
    almacenarApellido(apellidosTemporal);

    printf("_sueldo anual_");
    scanf("%f",&sueldoAnualTemporal);
    almacenarSueldoAnual(sueldoAnualTemporal);



//creamos un registro de tipo empleado que contenga los campos nombre y apellido.


//almacenamos de forma temporal en una variable propia mediante el uso de registros 2 arrays dinamicos que ocupan exactamente el espacio que deben ocupar 

    return 0;
}