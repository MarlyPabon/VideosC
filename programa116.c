#include<stdio.h>
#include<conio.h>

void cargar(int mat[4][4]){
    int f, c;
    for(f=0; f<4; f++){
        for(c=0; c<4; c++){
            printf("Ingrese las componentes: ");
            scanf("%i", &mat[f][c]);
        }
    }
}

void imprimir(int mat[4][4]){
    for(int f=0; f<4; f++){
        for(int c=0; c<4; c++){
            printf("%i ", mat[f][c]);
        }
        printf("\n");
    }
}

void imprimirDiagonal(int mat [4][4]){
    printf("ELEMENTOS DE LA DIAGONAL PRINCIPAL \n");

    for(int f=0; f<4; f++){
        for(int c=0; c<4; c++){
            if(f==c){
             printf("%i ", mat[f][c]);
            }
        }

    }
    /*TAMBIEN SIRVE*/
    /* for(int k=0; k<4; k++){
            print("%i ", mat[k][k]);
    }*/

}


void main(){
    int mat[4][4];
    cargar(mat);
    imprimir(mat);
    imprimirDiagonal(mat);

    getch();
    return 0;
}
