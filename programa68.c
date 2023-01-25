#include<stdio.h>
#include<conio.h>

int main(){

    int suma=0;
    int valor;
    char continua;

    do{
            printf("ingrese los valores: ");
            scanf("%i",&valor);
            suma=suma+valor;
            printf("Desea cargar otro valor? [s/S] ");
            scanf(" %c", &continua);

    }while(continua=='s' || continua=='S');

    printf("La suma de todos los valores ingresados es: %i",suma);

    getch();
    return 0;
}
