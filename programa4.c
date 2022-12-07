#include<stdio.h>
#include<conio.h>

int main () {

   int lado, perimetro;
   printf("Ingrese el numero del lado del cuadro: ");
   scanf("%i", &lado);
   perimetro=lado*4;
   printf("El perimetro del cuadro es: ");
   printf("%i", perimetro);

    getch(); //es para que el programa no se cierre rapido
    return 0;
}
