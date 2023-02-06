#include<stdio.h>
#include<conio.h>

int main (){

    char palabra[50];
    printf("Ingrese una palabra: ");
    gets(palabra);

    int x=0;

    while(palabra[x] !='\0'){ // el /0 terminador

        if(palabra[x]=='a' || palabra[x]=='e' || palabra[x]=='i' || palabra[x]=='o' || palabra[x]=='u'){
            palabra[x]='-';
        } x++;

    }

    printf("La palabra modificada es :  %s ", palabra);


    getch();
    return 0;
}
