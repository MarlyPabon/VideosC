#include<stdio.h>
#include<conio.h>

int main() {

    int num1, num2, num3, suma, producto;
    printf("Ingrese el primer Valor: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo Valor: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer Valor: ");
    scanf("%i", &num3);
    if(num1==num2 && num1==num3){
        suma=num1+num2;
        printf("la suma de los primeros valores es de: ");
        printf("%i", suma);
        printf("\n");
        producto=suma*num3;
        printf("El producto de los primeros valores multiplicado por el tercer valor es de: ");
        printf("%i", producto);
    }

    getch();
    return 0;
}

//se ingresan tres valores y si todos son iguales se imprime la suma del primero
//con el segundo yy a este resultado se multiplica por el tecero
