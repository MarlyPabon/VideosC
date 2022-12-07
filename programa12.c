#include<stdio.h>
#include<conio.h>

int main() {

    int valor;
    printf ("ingrese un valor comprendido entre 1 y 99: ");
    scanf ("%i", &valor);

    if (valor>=10){
        printf ("Tiene 2 digitos");
    }else{
        printf ("Tiene 1 digito");
    }
    getch();
    return 0;
}

//ingresar por teclado un numero positivo de uno o dos digitos
//mostrar un mensaje indicando si el numero tiene uno dos digitos
