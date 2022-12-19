#include<stdio.h>
#include<conio.h>

int main() {

    int n, x=1;
    float altura, suma=0, promedio;
    printf("Cuantas personas hay: ");
    scanf("%i", &n);
    while(x<=n){
        printf("Ingrese la altura: ");
        scanf("%f", &altura);
        suma=suma+altura;
        x=x+1;
    }
    promedio=suma/n;
    printf("Altura priomedio; ");
    printf("%f", promedio);

    getch();
    return 0;
}
