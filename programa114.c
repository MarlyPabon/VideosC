
#include<stdio.h>
#include<conio.h>

void cargar(int vector[5]){
    for(int x=0; x<5; x++){
        printf("Ingrese elemento: ");
        scanf("%i", &vector[x]);
    }
}

void ordenarMenorMayor(int vector[5]){

    for(int k=0; k<4; k++){
        for(int x=0; x<4-k;x++){
            if(vector[x]>vector[x+1]){
                int aux=vector[x];
                vector[x]=vector[x+1];
                vector[x+1]=aux;
            }
        }
    }
}

void ordenarMayorMenor(int vector[5]){

    for(int k=0; k<4; k++){
        for(int x=0; x<4-k;x++){
            if(vector[x]<vector[x+1]){
                int aux=vector[x];
                vector[x]=vector[x+1];
                vector[x+1]=aux;
            }
        }
    }
}

void imprimir(int vector[5]){
    for(int x=0; x<5; x++){
        printf("%i - ", vector[x]);
    }
    printf("\n");
}


int main(){
    int vector[5];
    cargar(vector);
    ordenarMenorMayor(vector);
    printf("Ordenado de Menor a Mayor \n ");
    imprimir(vector);
    ordenarMayorMenor(vector);
    printf("Ordenado de  Mayor a Menor \n ");
    imprimir(vector);

    getch();
    return 0;
}
