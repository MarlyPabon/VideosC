#include<stdio.h>
#include<conio.h>

int main() {

    int valor, suma, i, promedio;
    suma=0;
    for(i=1; i<=10; i++){
        printf("Ingrese los datos : ");
        scanf("%i", &valor);
        suma=suma+valor;

    }
    promedio=suma/10;
    printf("La suma total es: ");
    printf("%i", suma);
    printf("\n");
    printf("Elpromedio total es: ");
    printf("%i", promedio);


    getch();
    return 0;
}
