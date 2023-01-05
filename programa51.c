#include<stdio.h>
#include<conio.h>

int main() {

    int valor;
    do{
        printf("Ingrese un valor de 0 y 999. Donde 0 finaliza el programa: ");
        scanf("%i", &valor);
        if(valor>=100){
            printf("Tiene 3 digitos.");
        }else{
            if(valor>=10){
              printf("Tiene 2 digitos.");
            }else{
                printf("Tiene 1 digitos.");
            }
        }
        printf("\n");
    }while(valor!=0);

    getch();
    return 0;
}
