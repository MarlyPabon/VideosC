#include<stdio.h>
#include<conio.h>

int main() {

    int dd, mm, aa;
    printf("Ingrese el dia: ");
    scanf("%i", &dd);
    printf("Ingrese el mes: ");
    scanf("%i", &mm);
    printf("Ingrese el año: ");
    scanf("%i", &aa);
    if(dd==25 && mm==12){
        printf("La fecha ingresada corresponde a NAVIDAD. ");
    }

    getch();
    return 0;
}
