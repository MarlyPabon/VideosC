#include<stdio.h>
#include<conio.h>

int main() {

    int i, tabla;
    for(i=1; i<=10; i++){
        tabla=i*5;
        printf("%i", tabla);
        printf(" - ");
    }

    getch();
    return 0;
}
