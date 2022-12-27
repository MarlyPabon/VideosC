#include<stdio.h>
#include<conio.h>

int main() {

    int n, i, cantidad, valor;
    cantidad=0;
    printf("cuantos valores ingresera: ");
    scanf("%i", &n);
    for(i=1; i<=n; i++){
        printf("ingrese el valor: ");
        scanf("%i", &valor);
        if(valor>=1000){
            cantidad=cantidad+1;
        }
    }
    printf("Cantidad de valores ingresados mayores o iguales a 1000: ");
    printf("%i", cantidad);

    getch();
    return 0;
}
