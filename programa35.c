#include<stdio.h>
#include<conio.h>

int main() {

    int multiplo8;
    multiplo8=8;
    while(multiplo8<=500){
        printf("%i", multiplo8);
        printf(" - ");
        multiplo8=multiplo8+8;
    }

    getch();
    return 0;
}
