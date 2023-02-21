#include<stdio.h>
#include<conio.h>

void cargar(int vector[5]){
    for(int x=0; x<5; x++){
        printf("Ingrese elemento: ");
        scanf("%i", &vector[x]);
    }
}

void mayor (int vector[5]){
    int may=vector[0]; //aca se supone que el mayor es la posicion 0
    int pos=0;
    for(int x=1; x<5; x++){ //empieza en la posicion 1
        if(vector[x]>may){
            may=vector[x];
            pos=x;
        }
    }
    printf("El mayor elemento del vector es: %i\n", may);
    printf("Y se encuentra en la posicion: %i\n", pos);
}


int main(){
    int vector[5];
    cargar(vector);
    mayor(vector);

    getch();
    return 0;
}
