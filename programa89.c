#include<stdio.h>
#include<conio.h>

void ImprimirMayor(int v1, int v2){
    if(v1>v2){
        printf("El numero mayor es: %i ", v1);
    }else{
        printf("El numero mayor es: %i ", v2);
    }
}

int main(){
    int valor1, valor2;
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &valor2);
    ImprimirMayor(valor1, valor2);

    getch();
    return 0;
}
