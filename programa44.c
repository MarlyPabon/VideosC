#include<stdio.h>
#include<conio.h>

int main() {

    int i, valor, suma=0;
    for(i=1; i<=10; i++){
        printf("Ingrese un valor: ");
        scanf("%i", &valor);
        if(i>5){
            suma=suma+valor;
        }
    }
    printf("La suma de los ultimos 5 digitos son: ");
    printf("%i", suma);

    getch();
    return 0;
}
