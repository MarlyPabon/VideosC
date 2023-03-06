#include<stdio.h>
#include<conio.h>

void cargar(int mat[2][5]){
    for(int f=0; f<2; f++){
        for(int c=0; c<5; c++){
            printf("Ingresar los componentes: ");
            scanf("%i",&mat[f][c]);
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

void intercambiarFila(int mat[2][5]){
    int aux;
    for(int c=0; c<5; c++){
        aux=mat[0][c];
        mat[0][c]=mat[1][c];
        mat[1][c]=aux;
    }
}


int main(){
    int mat[2][5];
    cargar(mat);
    imprimir(mat);
    intercambiarFila(mat);
    printf("La matriz luego del intercambio de sus filas es: \n");
    imprimir(mat);


    getch();
    return 0;
}
