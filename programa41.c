#include<stdio.h>
#include<conio.h>

int main() {

    int mul3=0, mul5=0, i, valor;
    for(i=1; i<=10; i++){
        printf("Ingrese los valores: ");
        scanf("%i", &valor);
        if((valor%3)==0){
            mul3=mul3+1;
        }
        if((valor%5)==0){
            mul5=mul5+1;
        }
    }
    printf("La cantidad de multiplos de 3 son: ");
    printf("%i", mul3);
    printf("\n");
    printf("La cantidad de multiplos de 5 son: ");
    printf("%i", mul5);

    getch();
    return 0;
}
