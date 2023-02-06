#include<stdio.h>
#include<conio.h>
#include<string.h>

int main (){
    char nombre[31];
    char apellido[31];
    char nomApe[62];
    printf("Ingrese el nombre: ");
    gets(nombre);
    printf("Ingrese el apellido: ");
    gets(apellido);

    strcpy(nomApe, nombre);//nomApen ahora es nombre ya que copia de esta variable
    strcat(nomApe," ");//nos permite agregar un string a otro string
    strcat(nomApe, apellido); // osea añade ina caden al final de otra
    printf("%s", nomApe);

    getch();
    return 0;
}
