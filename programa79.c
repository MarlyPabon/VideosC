#include<stdio.h>
#include<conio.h>
#include<string.h>

int main (){
    char nombre1[31];
    char nombre2[31];
    char nombreLargo[31];
    printf("Ingrese primer nombre: ");
    gets(nombre1);
    printf("Ingrese segundo nombre: ");
    gets(nombre2);

    if(strlen(nombre1)>strlen(nombre2)){//el metodo strlen devulve la longitud de una cadena
        strcpy(nombreLargo, nombre1);
    }else{
        strcpy(nombreLargo, nombre2);//el metodo strcpy copia los caracteres de una cadena a otra
    }
    printf("el nombre %s tiene mas caracteres. ", nombreLargo);

    getch();
    return 0;
}
