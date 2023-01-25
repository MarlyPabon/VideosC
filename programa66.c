#include<stdio.h>
#include<conio.h>

int main (){

    int valor1, valor2;
    char operacion;
    printf("Ingrese primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese segundo valor: ");
    scanf("%i", &valor2);

    printf("Que operacion desea hacer? [+,-,*,/] : ");
    scanf(" %c", &operacion);

    if(operacion=='+'){
        int suma=valor1+valor2;
        printf("La suma de los valores ingresados es: %i", suma);

    }else{
        if(operacion=='-'){
        int resta=valor1-valor2;
        printf("La resta de los valores ingresados es: %i", resta);

        }else{
            if(operacion=='*'){
            int multi=valor1*valor2;
            printf("La multiplicacion de los valores ingresados es: %i", multi);

            }else{
                if(operacion=='/'){
                int divi=valor1/valor2;
                printf("La divicion  de los valores ingresados es: %i", divi);
                }
            }
        }
    }
    getch();
    return 0;
}
