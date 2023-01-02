#include<stdio.h>
#include<conio.h>

int main() {

    int i, valor, positivo=0, negativo=0, multip5=0, SumaPares=0;
    for(i=1; i<=10; i++){
        printf("Ingrese los valores: ");
        scanf("%i",&valor);
        if(valor>0){
            positivo++;
        }else{
            if(valor<0){
                negativo++;
            }
        }
        if(valor%15==0){
            multip5++;
        }
        if(valor%2==0){
            SumaPares=SumaPares+valor;
        }
    }

    printf("La cantidad de valores ingresados positivos son: ");
    printf("%i", positivo);
    printf("\n");
    printf("La cantidad de valores ingresados negativos son: ");
    printf("%i", negativo);
    printf("\n");
    printf("La cantidad de valores ingresados multiplos de 15 son: ");
    printf("%i", multip5);
    printf("\n");
    printf("La cantidad de valores ingresados pares son: ");
    printf("%i", SumaPares);
    printf("\n");

    getch();
    return 0;
}
