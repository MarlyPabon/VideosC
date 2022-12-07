#include<stdio.h>
#include<conio.h>

int main (){

    float precio, importe;
    int cantidad;
    printf ("Ingrese el precio del producto a comprar: ");
    scanf ("%f", &precio);
    printf ("Ingrese la cantidad que va a llevar: ");
    scanf ("%i", &cantidad);
    importe=precio*cantidad;
    printf ("El importe que debe pagar es de: ");
    printf ("%f", importe);

    getch();
    return 0;

}
