#include<conio.h>
#include<stdio.h>

int main(){

    int cant1=0, cant2=0, cant3=0, suma;
    float peso;
    do{
        printf("Ingrese el peso en kilogramos. (Donde 0 finaliza el programa): ");
        scanf("%f", &peso);
    if(peso>10.2){
        cant1++;
    }else{
        if(peso>=9.2){
            cant2++;
        }else{
            if(peso>0){
                cant3++;
            }

        }
    }

    }while(peso!=0);
    suma=cant1+cant2+cant3;
    printf(" cantidad de piezas con un peso mayor de 10.2 son: ");
    printf("%i", cant1);
    printf("\n");
    printf(" cantidad de piezas con un peso entre 9.8 y 10.2 son: ");
    printf("%i", cant2);
    printf("\n");
    printf(" cantidad de piezas con un peso menor de 9.8 son: ");
    printf("%i", cant3);
    printf("\n");
    printf("La cantidad total de piezas procesadas son: ");
    printf("%i", suma);
    printf("\n");

    getch();
    return 0;

}
