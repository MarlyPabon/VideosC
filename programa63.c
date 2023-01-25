#include<stdio.h>
#include<conio.h>

int main (){

    char letra1=94; //es segun la tabla ASCII -128 A 127
    char letra2='B';
    char letra3;

    printf("Ingrese un caracter: ");
    scanf(" %c", &letra3); //SE TIENE QUE DEJAR ESE ESPACIO

    printf("%c \n", letra1);
    printf("%c \n", letra2);
    printf("%c \n", letra3);

    getch();
    return 0;
}
