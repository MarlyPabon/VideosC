#include<stdio.h>
#include<conio.h>

// PROGRAMA QUE AL INGRESAR DOS NUMEROS MUESTRE POR PANTALLA EL MAYOR DE LOS NUMEROS

int main (){

    int num1, num2;
    printf ("Ingrese el primer valor: ");
    scanf ("%i", &num1);
    printf ("Ingrese el segundo valor: ");
    scanf ("%i", &num2);

    if (num1>num2){

        printf ("El valor mayor es: ");
        printf("%i", num1);

    }else{
        printf ("El valor mayor es: ");
        printf("%i", num2);
    }
    getch();
    return 0;


}
