#include<stdio.h>
#include<conio.h>
#include<string.h>

int main (){
    char usuraio[31];
    char clave[31];

    printf("Ingrese el nombre del usuario: ");
    gets(usuraio);
    printf("Digite la clave: ");
    gets(clave);

    if(strcmp(clave,"abc123")==0){
        printf("La clave ingresada es correcta. ");
    }else{
        printf("La clave ingresada no es correcta. ");
    }

    getch();
    return 0;
}
