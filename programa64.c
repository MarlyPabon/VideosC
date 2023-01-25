#include<stdio.h>
#include<conio.h>

int main (){

    int suma=0;
    int valor;
    char continua;

    do{
        printf("ingrese un valor entero: ");
        scanf("%i", &valor);
        suma=suma+valor;
        printf("Desea cargar otro valor? [s/n] ");
        scanf(" %c", &continua);

    }while(continua=='s');//si es s es verdadero se repite

    printf("La suma de todos los valores ingresados es: %i",suma);

    getch();
    return 0;
}
