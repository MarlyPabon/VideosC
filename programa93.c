#include<stdio.h>
#include<conio.h>

void CalcularMayor (int v1, int v2, int v3){
    if (v1>v2 && v1>v3){
        printf("El numero mayor es: %i \n", v1);
    }else{
        if(v2>v3){
            printf("El numero mayor es: %i \n", v2);
        }else{
            printf("El numero mayor es: %i \n", v3);
        }
    }
}

int main(){

    int valor1, valor2, valor3;
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &valor2);
    printf("Ingrese el tercer valor: ");
    scanf("%i", &valor3);

    CalcularMayor(valor1, valor2, valor3);

    getch();
    return 0;
}
