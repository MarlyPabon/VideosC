#include<stdio.h>
#include<conio.h>

int RetornarPromedio(int v1, int v2, int v3){

    int suma=v1+v2+v3;
    int promedio=suma/3;
    return promedio;
}

int main(){
    int valor1, valor2, valor3, pro;
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor2);
    printf("Ingrese el primer valor: ");
    scanf("%i", &valor3);
    pro=RetornarPromedio(valor1,valor2,valor3);
    printf("El promedio de los numero ingresados es: %i", pro);

    getch();
    return 0;
}
