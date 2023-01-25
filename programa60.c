#include<stdio.h>
#include<conio.h>

int main (){

    int vect1[4];
    int vect2 [4];
    int vectSuma [4];
    int i;

    printf("CARGA DEL PRIMER VECTOR \n");

    for(i=0; i<4; i++){
        printf("Ingrese el elemento: ");
        scanf("%i", &vect1[i]);
    }

    printf("CARGA DEL SEGUNDO VECTOR \n");

    for(i=0; i<4; i++){
        printf("Ingrese el elemento: ");
        scanf("%i", &vect2[i]);
    }

    for(i=0; i<4; i++){
        vectSuma[i]=vect1[i]+vect2[i];
    }

    printf("Vector resultante \n");
    for(i=0; i<4; i++){
        printf("%i - ", vectSuma[i]);
    }


    getch();
    return 0;
}
