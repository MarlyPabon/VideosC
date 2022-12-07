#include<stdio.h>
#include<conio.h>

int main() {

    int  antiguedad;
    float sueldo;
    printf("Ingrese el sueldo: ");
    scanf("%f", &sueldo);
    printf("Ingrese los años de antiguedad: ");
    scanf("%i", &antiguedad);
    if(sueldo<500 && antiguedad >=10){
        float aumento=sueldo*0.20;
        float sueldoPag=sueldo+aumento;
        printf("Sueldo a Pagar: ");
        printf("%f", sueldoPag);
    }else{
        if(sueldo<500){
            float aumento=sueldo*0.05;
            float sueldoPag=sueldo+aumento;
            printf("Sueldo a Pagar: ");
            printf("%f", sueldoPag);
        }else{
            printf("Sueldo a Pagar: ");
            printf("%f", sueldo);
        }
    }

    getch();
    return 0;
}
