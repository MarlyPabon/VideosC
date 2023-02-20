#include<stdio.h>
#include<conio.h>

int RetornarSuperficie(int lado){
    int superficie=lado*lado;
    return superficie;
}

int main(){
    int valor, sup;
    printf("Ingrese el valor del lado del cuadrado: ");
    scanf("%i", &valor);
    sup=RetornarSuperficie(valor);
    printf("La superficie del cuadrado es %i ", sup);

    getch();
    return 0;
}

//cofeccionar una funcion que le enviemos como parametro el valor del lado de un cuadrado y nos retorne su superficie
