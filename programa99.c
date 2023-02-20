
#include<stdio.h>
#include<conio.h>

int RetornarPerimetro(int lado){
    int perimetro=lado*4;
    return perimetro;
}

int main(){
    int la;
    printf("Ingrese el lado del cuadrado: ");
    scanf("%i",&la);

    printf("El perimetro del cuadrado es: %i",RetornarPerimetro(la));

    getch();
    return 0;

}
