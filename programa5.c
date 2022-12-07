#include<stdio.h>
#include<conio.h>

int main (){

    int num1, num2, num3, num4, suma, producto;
    printf ("Ingrese el primer numero: ");
    scanf ("%i", &num1);                                                                //es para ingresar datos el scanf
    printf ("Ingrese el segundo numero: ");
    scanf ("%i", &num2);
    printf ("Ingrese el tercer numero: ");
    scanf ("%i", &num3);
    printf ("Ingrese el cuarto numero: ");
    scanf ("%i", &num4);
    suma=num1+num2;
    producto=num3*num4;
    printf("La suma de los dos primeros numeros son: ");
    printf ("%i", suma);
    printf("\n"); //salto de linea
    printf ("El producto de los dos ultimos numeros son: ");
    printf ("%i", producto);
    getch ();
    return 0;

}
