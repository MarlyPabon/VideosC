#include<conio.h>
#include<stdio.h>

int main (){
    int suma=0, valor;
    do{
        printf("Ingrese un valor, donde 9999 finaliza el programa. ");
        scanf("%i", &valor);
        if (valor!=9999){
            suma=suma+valor;
        }
    }while(valor!=9999);
    printf("El valor acumulado es: ");
    printf("%i", suma);
    printf("\n");

    if (suma==0){
        printf("El valor acumulado es cero.");
    }else{
        if (suma>0){
            printf("El valor acumulado es positivo");
        }else{
            printf("El valor acumulado es negativo");

        }
    }
    getch;
    return 0;
}
