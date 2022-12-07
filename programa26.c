#include<stdio.h>
#include<conio.h>

int main() {

    int num1, num2, num3;
    printf("Ingrese el primer Valor: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo Valor: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer Valor: ");
    scanf("%i", &num3);
    if(num1<num2 && num1<num3){
        printf("el menor es ");
        printf("%i", num1);
    }else{
        if(num2<num3){
            printf("el menor es ");
            printf("%i", num2);
        }else{
            printf("el menor es ");
            printf("%i", num3);
        }
    }
    printf(" - ");
    if(num1>num2 && num2>num3){
        printf("el mayor es ");
        printf("%i", num1);
    }else{
        if(num2>num3){
            printf("el mayor es ");
            printf("%i", num2);
        }else{
            printf("el mayor es ");
            printf("%i", num3);
        }
    }

    getch();
    return 0;
}
