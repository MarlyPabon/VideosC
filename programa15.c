#include<stdio.h>
#include<conio.h>

int main() {

    int num1;
    printf("Ingrese un valor: ");
    scanf("%i", &num1);
    if(num1==0){
        printf("El valor ingresado es NULO");
    }else{
        if(num1>0){
            printf("El valor ingresado es POSITIVO");
        }else{
            printf("El valor ingresado es NEGATIVO");
        }
    }

    getch();
    return 0;
}
