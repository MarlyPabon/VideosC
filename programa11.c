#include<stdio.h>
#include<conio.h>

// PROGRAMA QUE INGRESE TRES NOTAS DE UN ALUMNO, SI EL PROMEDIO ES MAYOR O IGUAL QUE SIETE MOSTRAR "APROVADO"


int main (){
    int nota1, nota2, nota3, promedio;
    printf ("Ingrese la primera nota: ");
    scanf ("%i", &nota1);
    printf ("Ingrese la segunda nota: ");
    scanf ("%i", &nota2);
    printf ("Ingrese la tercera nota: ");
    scanf ("%i", &nota3);
    promedio=(nota1+nota2+nota3)/3;

    if (promedio>=7){

        printf("Estudiante Aprovado");
    }
    getch();
    return 0;
}
