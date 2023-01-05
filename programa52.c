#include<stdio.h>
#include<conio.h>

int main () {

    int suma=0,cant=0, valor, promedio;
    do{
        printf("Ingrese un valor de 0 y 999. Donde 0 finaliza el programa: ");
        scanf("%i", &valor);
        if(valor != 0){
            suma=suma+valor;
            cant++;
        }

    }while(valor!=0);

    if(cant != 0){
        promedio=suma/cant;
        printf("El promedio de los valores ingresados es: ");
        printf("%i", promedio);
    }else{
        printf("No se ha ingresado ningun valor ");
    }

    getch();
    return 0;
}
