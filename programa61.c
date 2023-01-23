#include<stdio.h>
#include<conio.h>

int main (){

    int cursoA[5];
    int cursoB[5];
    int i;
    int suma1, suma2;
    int promedioA, promedioB;

    printf("CARGA DE NOTAS DEL CURSO A \n");

    for(i=0; i<5; i++){
        printf("Ingrese la nota: ");
        scanf("%i", &cursoA[i]);
    }

    printf("CARGA DE NOTAS DEL CURSO B \n");

    for(i=0; i<5; i++){
        printf("Ingrese la nota: ");
        scanf("%i", &cursoB[i]);
    }

    suma1=0;
    suma2=0;

    for(i=0; i<5; i++){
        suma1=suma1+cursoA[i];
        suma2=suma2+cursoB[i];
    }

    promedioA=suma1/5;
    promedioB=suma2/5;

    printf("Promedio del curso A: %i \n", promedioA);
    printf("Promedio del curso B: %i \n", promedioB);

    if (promedioA==promedioB){
        printf("Los cursos A y B tienen el mismo promedio. ");
    }else{
        if(promedioA>promedioB){
            printf("El curso A tiene un promedio mejor. ");
        }else{
            printf("El curso A tiene un promedio mejor. ");
        }
    }

    getch();
    return 0;
}
