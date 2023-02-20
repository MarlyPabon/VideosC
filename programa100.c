#include<stdio.h>
#include<conio.h>

int RetornarSuperficie(int lado1, int lado2){
    int superficie=lado1*lado2;
    return superficie;
}

int main(){

    int lado1, lado2, lado3, lado4;
    printf("PRIMER RECTANGULO. \n");

    printf("Ingrese el lado menor del rectangulo: ");
    scanf("%i", &lado1);
    printf("Ingrese el lado mayor del rectangulo: ");
    scanf("%i", &lado2);

    printf("SEGUNDO RECTANGULO. \n");

    printf("Ingrese el lado menor del rectangulo: ");
    scanf("%i", &lado3);
    printf("Ingrese el lado mayor del rectangulo: ");
    scanf("%i", &lado4);

    if(RetornarSuperficie(lado1,lado2)==RetornarSuperficie(lado3, lado4)){
        printf("Los dos rectangulos tienen la misma superficie. ");
    }else{
        if(RetornarSuperficie(lado1,lado2)>RetornarSuperficie(lado3,lado4)){
            printf("El primer rectangulo tiene mayor superficie. ");
        }else{
            printf("El segundo rectangulo tiene una superficie mayor. ");
        }
    }
    getch();
    return 0;
}
