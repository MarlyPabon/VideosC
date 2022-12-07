#include<stdio.h>
#include<conio.h>

int main() {

    int num;
    printf("Ingrese un valor de hasta 3 digitos: ");
    scanf("%i", &num);
    if(num<10){
        printf("El valor ingresado tiene un digito que es: ");
        printf("%i", num);
    }else{
        if(num<100){
            printf("El valor ingresado tiene dos digitos que es: ");
            printf("%i", num);
        }else{
            if(num<1000){
                printf("El valor ingresado tiene tres digito que es: ");
                printf("%i", num);
            }else{
                    printf("El valor ingresado es incorrecto ");
            }
        }
    }
    getch();
    return 0;
}

