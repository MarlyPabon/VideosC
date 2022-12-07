#include<stdio.h>
#include<conio.h>

int main (){

    int num1, num2, num3, num4, suma, promedio;
    printf ("Ingrese el primer numero: ");
    scanf ("%i", &num1);                                                                //es para ingresar datos el scanf
    printf ("Ingrese el segundo numero: ");
    scanf ("%i", &num2);
    printf ("Ingrese el tercer numero: ");
    scanf ("%i", &num3);
    printf ("Ingrese el cuarto numero: ");
    scanf ("%i", &num4);
    suma=num1+num2+num3+num4;
    promedio=suma/4;
    printf("La suma de total de los numero es: ");
    printf ("%i", suma);
    printf("\n"); //salto de linea
    printf ("El promedio de los numeros ingresados es de: ");
    printf ("%i", promedio);

    getch ();
    return 0;
}
