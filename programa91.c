
//Desarrollar dos funciones que reciban como parámetro el valor del lado de un cuadrado.
//
//La primera debe calcular y mostrar la superficie y la segunda calcular y mostrar el perímetro.
//
//En la main llamar a las funciones pasando los valores enteros comprendidos entre 10 y 20


#include<stdio.h>
#include<conio.h>

void CalcularSuperficie (int lado){
    int superficie = lado*lado;
    printf("La superficie de un cuadrado de lado %i es:  %i \n ",lado, superficie);
}

void CalcularPerimetro (int lado){
    int perimetro = lado*4;
    printf("La perimetro de un cuadrado de lado %i es:  %i \n ",lado, perimetro);
}

int main(){
    int i;
    for(i=10; i<20; i++){
        CalcularSuperficie(i);
        CalcularPerimetro(i);
    }
    getch();
    return 0;
}
