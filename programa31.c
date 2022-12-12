#include<stdio.h>
#include<conio.h>

int main() {

    int x, nota, alto, bajo;
    alto=0;
    bajo=0;
    x=1;
    while(x<=10){
        printf("Ingreses las notas: ");
        scanf("%i", &nota);
        if(nota>=7){
            alto=alto+1;
        }else{
            bajo=bajo+1;
        }
        x=x+1;
    }
    printf("Cantidad de alumnos con notas mayores o iguales que siete: ");
    printf("%i", alto);
    printf("\n");
    printf("Cantidad de alumnos con notas menore a siete es de: ");
    printf("%i", bajo);

    getch();
    return 0;
}
