#include<stdio.h>
#include<conio.h>

int main() {

    int i, termino, numero;
    printf("Ingrese un digito del 1 al 10: ");
    scanf("%i", &numero);
    for(i=1; i<=13; i++){
        termino=i*numero;
        printf("%i", termino);
        printf(" - ");
    }

    getch();
    return 0;
}
