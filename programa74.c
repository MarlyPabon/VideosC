#include<stdio.h>
#include<conio.h>

int main(){

    char palabra[51];
    printf("Ingrese una palabra: ");
    gets(palabra);
    if(palabra[0]=='A' || palabra[0]=='a' ){
        printf("La palabra %s inicia con la vocal A o con la a miniscula. ", palabra);
    }else{
        printf("La palabra no inicia con la vocal A. ");
    }

    getch();
    return 0;
}
