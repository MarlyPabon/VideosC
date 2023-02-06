#include<stdio.h>
#include<conio.h>
#include<string.h>

int main (){
    char nombre1[31];
    char nombre2[31];

    printf("Ingrese primer nombre: ");
    gets(nombre1);
    printf("Ingrese segundo nombre: ");
    gets(nombre2);

    printf("Nombres Ordenados Alfabeticamnete \n");

    if(strcmp(nombre1,nombre2)<0){
        printf("%s - %s ", nombre1, nombre2);
    }else{
        printf("%s - %s", nombre2, nombre1);
    }

    getch();
    return 0;
}
