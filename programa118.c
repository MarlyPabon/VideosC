#include<stdio.h>
#include<conio.h>

void cargar(int mat[2][5]){
    int f, c;
    for(c=0; c<5; c++){
        for(f=0; f<2; f++){
            printf("Ingrese las componente de la fila %i y la columna %i: ");
            scanf("%i", &mat[f][c]);
        }
    }
}

void imprimir(int mat[2][5]){
    int f, c;
    for(f=0; f<2; f++){
        for(c=0; c<5; c++){
            printf("%i ", mat[f][c]);
        }
        printf("\n");
    }
}

void main(){
    int mat[2][5];
    cargar(mat);
    imprimir(mat);

    getch();
    return 0;
}
