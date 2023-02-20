#include<stdio.h>
#include<conio.h>


int main (){

    char pal[30];
    char letra;
    int x=0;
    printf("Ingrese la palabra: ");
    gets(pal);
    printf("Ingrese la letra a buscar: ");
    scanf(" %c",&letra);

    while(pal[x]!='\0'){
        if(letra==pal[x]){
         while (pal[x]!='\0') {
            printf("%c",pal[x]);
            x++;
         }
         break;
        }
        x++;

    }


    getch();
    return 0;
}
