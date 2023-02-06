#include<stdio.h>
#include<conio.h>

void CargarSumar(){
    int valor1, valor2, suma;
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &valor2);
    suma=valor1+valor2;
    printf("La suma de los valores %i y %i  es de: %i \n",valor1, valor2, suma);
}

void separacion(){
    printf("--------------------------------------------------------- \n");
}
int main(){
    CargarSumar();
    separacion();
    CargarSumar();
    separacion();

    getch();
    return 0;

}
