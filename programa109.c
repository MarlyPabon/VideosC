// Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
//  1-Realizar la carga de las notas.
//  2-Mostrar el nombre del curso que obtuvo el mayor promedio general.


#include<stdio.h>
#include<conio.h>

void cargar(int notas[5]){
    for(int x=0; x<5; x++){
        printf("Ingresar las notas: ");
        scanf("%i", & notas[x]);
    }
}

float RetornarPromedio (int notas[5]){
    int suma=0;
    int promedio;

    for(int x=0; x<5; x++){
        suma=suma+notas[x];
    }
    promedio=suma/5;
    return promedio;
}

int main()
{
    int CursoA[5];
    int CursoB[5];

    printf("Carga de las notas del curso A \n");
    cargar(CursoA);
    printf("Carga de las notas del curso B \n");
    cargar(CursoB);

    if(RetornarPromedio(CursoA)==RetornarPromedio(CursoB)){
        printf("Los dos cursos tiene un promedio igual de Notas. ");
    }else{
        if(RetornarPromedio(CursoA)>RetornarPromedio(CursoB)){
            printf("El curso A es el que tiene mayor promedio de Notas. ");
        }else{
            printf("El curso B es el que tiene mayor promedio de Notas. ");
        }
    }

    getch();
    return 0;
}
