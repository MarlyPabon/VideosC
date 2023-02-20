//  Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
//  Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno.
//  Imprimir los gastos en sueldos de cada turno.
//  Se deben implementar las siguientes funciones:

#include<stdio.h>
#include<conio.h>

void cargar(float sueldos[4]){

    for(int x=0; x<4; x++){
        printf("Ingrese el sueldo: ");
        scanf("%f", &sueldos[x]);
    }
}
float gastosTurno(float sueldos[4]){

    float total=0;
    for(int x=0; x<4; x++){
        total=total+sueldos[x];
    }
    return total;
}
int main()
{
    float sueldosMa[4];
    float sueldosTar[4];
    printf("Carga de sueldos del turno manana\n");
    cargar(sueldosMa);
    printf("Carga de sueldos del turno tarde\n");
    cargar(sueldosTar);
    printf("Gastos del turno de la manana: %0.2f\n", gastosTurno(sueldosMa));
    printf("Gastos del turno de la tarde: %0.2f", gastosTurno(sueldosTar));
    getch();
    return 0;
}
