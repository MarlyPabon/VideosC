#include<stdio.h>
#include<conio.h>

// PROGRAMA QUE SOLICITE DOS NUMEROS, SI EL PRIMERO RS MAYOR AL SEGUNDO INFORMAR SU SUMA Y DIFERENCIA, EN CASO CONTRARIO MOSTRAR EL PRODUCTO Y LA DIVISION DEL PRIMERO RESPECTO AL SEGUNDO


int main (){
    int num1, num2, suma, producto, resta, division;
    printf ("Ingrese el primer valor: ");
    scanf ("%i", &num1);
    printf ("Ingrese el segundo valor: ");
    scanf ("%i", &num2);

    if (num1>num2){

        suma=num1+num2;
        resta=num1-num2;
        printf ("La suma de los valores es de: ");
        printf ("%i", suma);
        printf("\n"); //salto de linea
        printf ("La diferencia de los valores es de: ");
        printf ("%i", resta);

    }else{

        producto=num1*num2;
        division=num1/num2;
        printf ("El producto de los valores es de: ");
        printf ("%i", producto);
        printf("\n"); //salto de linea
        printf ("La division de los valores es de: ");
        printf ("%i", division);
    }

    getch();
    return 0;
}
