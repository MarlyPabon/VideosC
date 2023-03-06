#include<stdio.h>
#include<conio.h>

void cargar(int mat[3][4]){
    int f, c;
    for(f=0; f<3; f++){
        for(c=0; c<4; c++){
            printf("Ingrese las componentes: ");
            scanf("%i", &mat[f][c]);
        }
    }
}


void PrimeraFila(int mat[4][4]){
    printf("PRIMERA FILA DE LA MATRIZ. ");
    for(int c=0; c<4; c++){
        printf("%i", mat[0][c]);
    }
    printf("\n");

}

void UltimaFila(int mat[3][4]){
    printf("ULTIMA FILA DE LA MATRIZ. ");
    for(int c=0; c<4; c++){
        printf("%i", mat[2][c]);
    }
    printf("\n");

}

void PrimeraColumna(int mat[3][4]){
    printf("PRIMERA COLUMNA DE LA MATRIZ. ");
    for(int f=0; f<3; f++){
        printf("%i", mat[f][0]);
    }
    printf("\n");

}
void imprimir(int mat[3][4]){
    for(int f=0; f<3; f++){
        for(int c=0; c<4; c++){
            printf("%i ", mat[f][c]);
        }
        printf("\n");
    }
}


void main(){
    int mat[3][4];
    cargar(mat);
    imprimir(mat);
    PrimeraFila(mat);
    UltimaFila(mat);
    PrimeraColumna(mat);

    getch();
    return 0;
}
