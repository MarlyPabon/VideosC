#include<stdio.h>
#include<conio.h>

int main() {

    int TotPreg, TotCorrec, porcentaje;
    printf("Ingrese la cantidad de preguntas del examen: ");
    scanf("%i", &TotPreg);
    printf("Ingrese la cantidad de preguntas del contestadas correctamente: ");
    scanf("%i", &TotCorrec);
    porcentaje=TotCorrec*100/TotPreg;
    if(porcentaje>=90){
        printf("Nivel Maximo");
    }else{
        if(porcentaje>=75){
            printf("Nivel Medio");
        }else{
            if(porcentaje>=50){
                printf("Nivel Regular");
            }else{
                printf("Fuera de Nivel");
            }
        }
    }

    getch();
    return 0;
}
