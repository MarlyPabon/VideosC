#include<stdio.h>
#include<conio.h>

int main () {

    int num1, num2, suma, producto;
    printf("Ingrese el primer valor: ");
    scanf("%i", &num1);

    printf("Ingrese el segundo valor: ");
    scanf("%i", &num2);
    suma=num1+num2;
    producto=num1*num2;
    printf("La suma de los dos valores son: ");
    printf("%i", suma);
    printf("\n"); //salto de linea
    printf("El producto de los dos valores son: ");
    printf("%i", producto); //muestra el cotenido de la variable

    getch();
    return 0;


}
