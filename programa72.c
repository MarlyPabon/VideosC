#include<stdio.h>
#include<conio.h>

int main(){

    char palabra[40];
    printf("Ingrese una palabra en minisculas: ");
    gets(palabra);
    int x=0;

    while(palabra[x] !='\0'){ // el /0 terminador
         x++;

    }
    printf("La cantidad de letra que tiene la palabra %s es de %i ", palabra, x);


    getch();
    return 0;
}
