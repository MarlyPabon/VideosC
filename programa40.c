#include<stdio.h>
#include<conio.h>

int main() {

    int aprobados, reprobados, i, nota;
    aprobados=0;
    reprobados=0;
    for(i=1; i<=10; i++){
        printf("Ingrese la nota del alumno: ");
        scanf("%i", &nota);
        if(nota>=7){
            aprobados=aprobados+1;
        }else{
            reprobados=reprobados+1;
        }
    }
    printf("El numero de aprovado es: ");
    printf("%i", aprobados);
    printf("\n");
    printf("El numero de reprovado es: ");
    printf("%i", reprobados);

    getch();
    return 0;
}
