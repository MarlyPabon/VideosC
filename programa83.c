#include<stdio.h>
#include<conio.h>
#include<string.h>

//INGRESAR POR TECLADO DOS NOMBRE DE PERSONAS Y LUEGO MOSTRALAS PRIMERO EL QUE TIENE MAS CARACTERES Y LUEGO EL QUE MENOS TIENE.


int main(){

    char nombre1[31];
    char nombre2[31];
    char nombreLargo[31];
    char nombreCorto[31];
    printf("Ingrese primer nombre: ");
    gets(nombre1);
    printf("Ingrese segundo nombre: ");
    gets(nombre2);

    if(strlen(nombre1)>strlen(nombre2)){
        printf("EL NOMBRE %s TIENE MAS CARACTERES. \n Y EL NOMBRE %s TIENE MENOS CARACTERES", nombre1,nombre2);
    }else{
        printf("EL NOMBRE %s TIENE MAS CARACTERES. \n Y EL NOMBRE %s TIENE MENOS CARACTERES", nombre2,nombre1);
    }




    getch();
    return 0;
}
