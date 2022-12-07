#include<stdio.h>
#include<conio.h>

int main() {

    int nota1, nota2, nota3, prom;
    printf("Ingrese la primera nota: ");
    scanf("%i", &nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%i", &nota2);
    printf("Ingrese la tercera nota: ");
    scanf("%i", &nota3);
    prom=(nota1+nota2+nota3)/3;
    if(prom>=7){
        printf("APROVADO");
    }else{
        if (prom>=4){
            printf("REGULAR");
        }else{
            printf("REPROVADO");
        }
    }
    getch();
    return 0;
}
