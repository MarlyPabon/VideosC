#include<conio.h>
#include<stdio.h>

int main (){

    int i, may, men;
    float altura[5];
    float suma, promedio;

    for(i=0; i<5; i++){
        printf("Ingrese la altura de la persona: ");
        scanf("%f", &altura[i]);
    }
    suma=0;
    for(i=0; i<5; i++){
        suma=suma+altura[i];
    }
    promedio=suma/5;
    printf("Promedio de alturas: ");
    printf("%0.2f", promedio);
    printf("\n");

    may=0;
    men=0;

    for(i=0; i<5; i++){
        if(altura[i]>promedio){
            may++;
        }else{
            if(altura[i]<promedio){
                men++;
            }
        }
    }

    printf("Cantidad de personas con altura mayor al promedio: ");
    printf("%i", may);
    printf("\n");
    printf("Cantidad de personas con altura menor al promedio: ");
    printf("%i", men);
    printf("\n");

    getch;
    return 0;
}
