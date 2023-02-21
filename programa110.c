
// Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor. Hacer las dos actividades en funciones distintas.

#include<stdio.h>
#include<conio.h>


void cargar(int vec[10]){
    for(int x=0; x<10; x++){
        printf("Ingrese elemento: ");
        scanf("%i", &vec[x]);
    }
}

void EstaOrdenado(int vec[10]){
    int ordenado=1;
    for(int x=0;x<9;x++){
        if(vec[x+1]<vec[x]){
            ordenado=0;
            break;
        }
    }
    if(ordenado==1){
        printf("Los elementos del vector estan ordenados de menor a mayor. ");
    }else{
        printf("Los elementos del vector no estan ordenados de menor a mayor. ");
    }
}

int main(){
    int vector[10];
    cargar(vector);
    EstaOrdenado(vector);

    getch();
    return 0;
}
