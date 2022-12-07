#include<stdio.h>

int main() {

    int horasTrabajadas;
    float costoHora;
    float sueldo;
    printf("Ingrese las horas trabajadas por el empleado: ");
    scanf("%i",&horasTrabajadas); // es i porque es un int, y f en las otras porque son float
    printf("Ingrese el pago por hora: ");
    scanf("%f",&costoHora); // se debe poner & para que cargue bien el programa
    sueldo=horasTrabajadas*costoHora;
    printf("El sueldo total del operario es ");
    printf("%f",sueldo);
    getchar();
    return 0;

}
