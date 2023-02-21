#include<stdio.h>
#include<conio.h>

void cargar(int vector[5]){
    for(int x=0; x<5; x++){
        printf("Ingrese elemento: ");
        scanf("%i", &vector[x]);
    }
}

int menor (int vector[5]){
    int men=vector[0]; //aca se supone que el mayor es la posicion 0
    for(int x=1; x<5; x++){ //empieza en la posicion 1
        if(vector[x]<men){
            men=vector[x];
        }
    }
    return men;
}

void verificarRepite(int vector[5], int men){
    int cant=0;
    for(int x=0; x<5; x++){
        if (vector[x]==men){
            cant++;
        }
    }
    if(cant==1){
        printf("El menor elemento del vector no se repite");
    }else{
        printf("El menor se encuentra repetido dentro del vector.");
    }
}

int main(){

    int vector[5];
    int men;
    cargar(vector);
    men=menor(vector);
    printf("El elemento menor del vector es: %i\n", men);
    verificarRepite(vector,men);

    getch();
    return 0;
}
