#include<stdio.h>
#include<conio.h>

int main() {

    int valor, x, suma1, suma2;
    suma1=0;
    suma2=0;
    x=1;
    printf("DATOS A INGRESAR DE LA PRIMERA LISTA: ");
    printf("\n");
    while(x<=15){
        printf("Ingrese los valores: ");
        scanf("%i", &valor);
        suma1=suma1+valor;
        x=x+1;
    }
    x=1;
    printf("DATOS A INGRESAR DE LA SEGUNDA LISTA: ");
    printf("\n");
    while(x<=15){
        printf("Ingrese los valores: ");
        scanf("%i", &valor);
        suma2=suma2+valor;
        x=x+1;
    }
    if(suma1>suma2){
        printf("La Primera lista es la mayor con una suma total de: ");
        printf("%i", suma1);
    }else{
        if(suma2>suma1){
                printf("La Segunda lista es la mayor con una suma total de: ");
                printf("%i", suma2);
        }else{
            printf("LAS LISTAS INGRESADAS TIENEN UNA SUMA IGUAL: ");
            printf("\n");
            printf("Suma de la primera lista ");
            printf("%i", suma1);
            printf("\n");
            printf("Suma de la segunda lista ");
            printf("%i", suma2);
        }
    }

    getch();
    return 0;
}
