#include<stdio.h>
#include<conio.h>

void CalcularCuadrado(){
    int valor1,ProductoCua;
    printf("Ingrese un numero: ");
    scanf("%i", &valor1);
    ProductoCua=valor1*valor1;
    printf("El cuadrado del numero %i es: %i \n", valor1,ProductoCua);


}
void CalcularProductos(){
    int valor1, valor2, producto;
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &valor2);
    producto=valor1*valor2;
    printf("El producto de los valores %i y %i  es de: %i \n",valor1, valor2, producto);
}

int main(){
    CalcularCuadrado();
    CalcularProductos();

    getch();
    return 0;
}
