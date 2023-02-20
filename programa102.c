//Guardar los datos de 6 sueldos de empleados en un vector de tipo float. Confeccionar las siguientes funciones:
//1-Carga de sueldos.
//2-Impresi�n de los sueldos.
//3-Gasto total de la empresa en sueldos.

#include<stdio.h>
#include<conio.h>

void Cargar(float sueldos[6]){
    int x;
    for(x=0;x<6;x++)
    {
        printf("Ingrese el sueldo:");
        scanf("%f",&sueldos[x]);
    }
}

void imprimir(float sueldos[6]){
    int x;
    printf("Listado completo de sueldos\n");
    for(x=0;x<6;x++){
        printf("%0.2f\n",sueldos[x]);
    }
}

void calcularGastos(float sueldos[6]){
    float total=0;
    int x;
    for(x=0;x<6;x++){
        total=total+sueldos[x];
    }
    printf("Gasto total en sueldos de la empresa:%0.2f",total);
}


int main(){
    float sueldos[6];
    Cargar(sueldos);
    imprimir(sueldos);
    calcularGastos(sueldos);
    getch();
    return 0;
}
