
//Desarrollar una funci�n que reciba como par�metro un caracter.
//Si llega una 'h' mostrar por pantalla el mensaje "hombre",
//si llega una 'm' mostrar el mensaje "mujer".
//Llamar desde la funci�n main pasando una vez una 'h' y otra vez una 'm'


#include<stdio.h>
#include<conio.h>

void mostrarGenero (char tipo){
    if(tipo == 'h'){
        printf("HOMBRE \n");
    }
    if(tipo == 'm'){
        printf("MUJER \n");
    }
}

int main(){

    mostrarGenero('h');
    mostrarGenero('m');
    getch();
    return 0;
}
