#include<stdio.h>
#include<conio.h>

int main() {

    int n,x,valor,pares,impares;
    x=1;
    pares=0;
    impares=0;
    printf("Cuantos numeros ingresara: ");
    scanf("%i", &n);
    while(x<=n){
        printf("Ingrese el valor: ");
        scanf("%i", &valor);
        if(valor%2==0){
            pares=pares+1;
        }else{
            impares=impares+1;
        }
        x=x+1;
    }
    printf("Cantidad de pares: ");
    printf("%i", pares);
    printf("\n");
    printf("Cantidad de impares: ");
    printf("%i", impares);

    getch();
    return 0;
}
