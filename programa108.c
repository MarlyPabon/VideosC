// Desarrollar un programa que permita administrar un vector de 8 elementos tipo entero.
// Se deben codificar las siguientes funciones:
//   1-Carga del vector.
//   2-Retornar el valor acumulado de todos los elementos del vector.
//   3-Retornar el valor acumulado de los elementos del vector que sean mayores a 36.
//   4-Retornar la cantidad de componentes con valores mayores a 50.

#include<stdio.h>
#include<conio.h>

void cargar(int vector[8]){
    for(int x=0; x<8; x++){
        printf("Ingrese un valor: ");
        scanf("%i", &vector[x]);
    }
}

int sumar(int vector[8]){

    int suma=0;
    for(int x=0; x<8; x++){
        suma=suma+vector[x];
    }
    return suma;
}

int sumaMayores36(int vector[8]){

    int sumas=0;
    for (int x=0; x<8; x++){
        if(vector[x]>36){
            sumas=sumas+vector[x];
        }
    }
    return sumas;

}

int cantidadMayores50(int vector[8]){
    int cant=0;
    for(int x=0; x<8; x++){
        if(vector[x]>50){
            cant++;
        }
    }
return cant;

}


int main()
{
    int vector[8];
    cargar(vector);
    printf("valor acumulado de todos los elementos:%i\n", sumar(vector));
    printf("valor acumulado de los elementos del vector que sean mayores a 36: %i\n", sumaMayores36(vector));
    printf("cantidad de componentes con valores mayores a 50: %i", cantidadMayores50(vector));
    getch();
    return 0;
}
