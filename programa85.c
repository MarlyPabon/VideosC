#include<stdio.h>
#include<conio.h>

void presentacion(){
    printf("Programa que permite cargar dos valores por teclado. \n");
    printf("Efectuar la suma de dichos valores. \n");
    printf("Muestra el resultado. \n");
    printf("--------------------------------------------------------- \n");
}

void CargarSumar(){
    int valor1, valor2, suma;
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &valor2);
    suma=valor1+valor2;
    printf("La suma de los valores es de: %i \n", suma);
}

void finalizacion(){
    printf("--------------------------------------------------------- \n");
    printf("Gracias por utilizar este programa. \n");
}

int main(){
    presentacion();
    CargarSumar();
    finalizacion();
}
