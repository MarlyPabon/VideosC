#include<stdio.h>
#include<conio.h>

int main() {

    int suma1, suma2, suma3;
    int pro1, pro2, pro3;
    int i, edad;

    suma1=0;
    printf("Ingreso de las edades del turno de la mañana. ");
    printf("\n");

    for(i=1; i<=5; i++){
        printf("Igrese la edad: ");
        scanf("%i", &edad);
        suma1=suma1+edad;
    }
    pro1=suma1/5;
    printf("Promedio de edades del turno de la mañana es de: ");
    printf("%i", pro1);
    printf("\n");

    //----------//

    suma2=0;
    printf("Ingreso de las edades del turno de la tarde. ");
    printf("\n");

    for(i=1; i<=6; i++){
        printf("Igrese la edad: ");
        scanf("%i", &edad);
        suma2=suma2+edad;
    }
    pro2=suma2/6;
    printf("Promedio de edades del turno de la tarde es de: ");
    printf("%i", pro2);
    printf("\n");

    //----------//

    suma3=0;
    printf("Ingreso de las edades del turno de la noche. ");
    printf("\n");

    for(i=1; i<=11; i++){
        printf("Igrese la edad: ");
        scanf("%i", &edad);
        suma3=suma3+edad;
    }
    pro3=suma3/11;
    printf("Promedio de edades del turno de la noche es de: ");
    printf("%i", pro3);
    printf("\n");

    //----------//

    if (pro1<pro2 && pro1<pro3){
        printf("El turno de la mañana tiene un promedio de edades menor.");
    }else{
        if (pro2<pro3){
            printf("El turno de la tarde tiene un promedio de edades menor. ");
        }else{
            printf("El turno de la noche tiene un promedio de edades menor. ");
        }
    }


    getch();
    return 0;
}
