#include<conio.h>
#include<stdio.h>

int main(){

    float TurMan[4];
    float TurTarde[4];
    float man, tarde;
    int i;

    printf("SUUELDO DE LOS EMPLEADOS DEL TURNO DE LA MAÑANA.\n");
    for(i=0; i<4; i++){
        printf("Ingrese el sueldo: ");
        scanf("%f", &TurMan[i]);
    }
    printf("SUUELDO DE LOS EMPLEADOS DEL TURNO DE LA TARDE.\n");
    for(i=0; i<4; i++){
        printf("Ingrese el sueldo: ");
        scanf("%f", &TurTarde[i]);
    }
    man=0;
    tarde=0;

    for(i=0; i<4; i++){
        man=man+TurMan[i];
        tarde=tarde+TurTarde[i];
    }
    printf("Total de gastos del turno de la mañana: ");
    printf("%0.2f\n", man);
    printf("Total de gastos del turno de la tarde: ");
    printf("%0.2f\n", tarde);


    getch();
    return 0;

}
