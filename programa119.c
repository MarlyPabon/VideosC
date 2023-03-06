#include<stdio.h>
#include<conio.h>

void cargar(int mat[3][4]){
    for(int f=0; f<3; f++){
        for(int c=0; c<4; c++){
            printf("Ingresar los componentes: ");
            scanf("%i",&mat[f][c]);
        }
    }
}


void obtenerMayor(int mat[3][4]){
    int may=mat[0][0];
    for(int f=0; f<3; f++){
        for(int c=0; c<4; c++){
            if(mat[f][c]>may){
                may=mat[f][c];
            }
        }
    }
    printf("El elemento mayor de la matriz es %i ", may);
}

int main(){
    int mat[3][4];
    cargar(mat);
    obtenerMayor(mat);

    getch();
    return 0;
}
