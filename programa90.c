#include<stdio.h>
#include<conio.h>

void CalcularSueldo(float CostoHoras, int CantidadHoras){
    float sueldo= CostoHoras*CantidadHoras;
    printf("El sueldo total a pagar es de %0.2f \n",sueldo);
}

int main(){
    float CostoHora;
    int CantidadHora;
    char opcion;

    do{
        printf("Cuanto se le va a pagar por Hora: ");
        scanf("%f", &CostoHora);
        printf("Cuantas horas trabajo: ");
        scanf("%i", &CantidadHora);
        CalcularSueldo(CostoHora,CantidadHora);
        printf("Desea calcular los datos de otro empleado [s/n] ");
        scanf(" %c", &opcion);


    }while(opcion=='s');

    getch();
    return 0;
}
