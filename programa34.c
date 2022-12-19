#include<stdio.h>
#include<conio.h>

int main() {

    int x,serie;
    serie=11;
    x=1;
    while(x<=25){
        printf("%i", serie);
        printf(" - ");
        serie=serie+11;
        x=x+1;
    }

    getch();
    return 0;
}
