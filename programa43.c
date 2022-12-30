#include<stdio.h>
#include<conio.h>

int main() {

    int n, i, base, altura, superficie, cantidad=0;
    printf("cuantos valores ingresera: ");
    scanf("%i", &n);
    for(i=1; i<=n; i++){
        printf("Ingrese la altura del triangulo: ");
        scanf("%i", &altura);
        printf("Ingrese la base del triangulo: ");
        scanf("%i", &base);
        superficie=base*altura/2;
        printf("La superficie es de: ");
        printf("%i", superficie);
        printf("\n");

        if(superficie>12){
            cantidad++;
        }

    }
    printf("La cantida de triangulos con superficie mayor a 12 son: ");
    printf("%i", cantidad);

    getch();
    return 0;
}
