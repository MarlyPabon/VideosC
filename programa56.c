#include<conio.h>
#include<stdio.h>

int main (){

    int i;
    int sueldo[5];

    //carga del vector
    for(i=0; i<5; i++){
        printf("Ingrese valor del sueldo: ");
        scanf("%i", &sueldo[i]);
    }
    printf("LISTADO DE LOS SUELDOS INGRESADOS\n");
    //IMPRESION DEL VECTOR

    for(i=0; i<5; i++){
        printf("%i", sueldo[i]);
        printf("\n");
    }

    getch();
    return 0;
}
