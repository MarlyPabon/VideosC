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
    if(mm==1 || mm==2 || mm==3){
        printf("La fecha ingresada corresponde al primer trimestre ");
        printf("%i - ", dd);
        printf("%i - ", mm);
        printf("%i ", aa);
    }

    getch();
    return 0;
}
