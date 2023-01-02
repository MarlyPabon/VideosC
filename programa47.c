#include<stdio.h>
#include<conio.h>

int main() {

    int n, i,lado1, lado2, lado3, cont1=0, cont2=0, cont3=0;
    printf("cuantos valores ingresera: ");
    scanf("%i", &n);
    for(i=1; i<=n; i++){
        printf("Ingrese el lado 1 ");
        scanf("%i", &lado1);
        printf("Ingrese el lado 2 ");
        scanf("%i", &lado2);
        printf("Ingrese el lado 3 ");
        scanf("%i", &lado3);
        if(lado1==lado2 && lado1==lado3){
                printf("Es un triangulo Equilatero. ");
                printf("\n");
                cont1++;
        }else{
            if(lado1==lado2 || lado1==lado3 || lado2==lado3){
                printf("Es un triangulo Isosceles. ");
                printf("\n");
                cont2++;
            }else{
                printf("Es un triangulo Escaleno. ");
                printf("\n");
                cont3++;
            }
        }
    }
    printf("La cantidad de triangulos equilateros es de: ");
    printf("%i", cont1);
    printf("\n");
    printf("La cantidad de triangulos Isosceles es de: ");
    printf("%i", cont2);
    printf("\n");
    printf("La cantidad de triangulos Escaleno es de: ");
    printf("%i", cont3);
    printf("\n");


    if(cont1<cont2 && cont1<cont3){
        printf("Hay menor cantidad de triangulos equilateros. ");
    }else{
        if(cont2<cont3){
           printf("Hay menor cantidad de triangulos Isosceles. ");

        }else{
            printf("Hay menor cantidad de triangulos Escaleno. ");
        }
    }

    getch();
    return 0;
}
