#include<stdio.h>
#include<conio.h>

int main() {

    int n, x;
    printf("Ingrese el Valor: " );
    scanf("%i", &n);
    x=1;
    while(x<=n){
            printf("%i", x);
            printf(" - ");
            x=x+1;

    }


    getch();
    return 0;
}

//escribir un programa que solicite un numero y nos muestre desde 1 hasta el valor ingresado
