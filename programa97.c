#include<stdio.h>
#include<conio.h>


int RetornarMayor(int v1, int v2){
    int mayor;
    if(v1>v2){
        mayor=v1;
    }else{
        mayor=v2;
    }
    return mayor;
}

int main(){
    int valor1, valor2, May;
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor2);
    May=RetornarMayor(valor1, valor2);
    printf("El numero mayor es:  %i ", May);

    getch();
    return 0;
}
