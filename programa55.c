
#include<conio.h>
#include<stdio.h>

int main (){

    int cuenta;
    float saldo, suma=0;

    do{
            printf("Ingrese el numero de cuenta (valor negativopara finalizar). ");
            scanf("%i", &cuenta);

            if(cuenta>=0){
                printf("Ingrese saldo: ");
                scanf("%f", &saldo);

                if(saldo>0){
                    printf("Saldo Acreador. ");
                    suma=suma+saldo;
                }else{
                    if (saldo<0){
                       printf("Saldo Deudor. ");
                    }else{
                        printf("Saldo Nulo. ");
                    }
                }
                printf("\n");
            }

    }while(cuenta>=0);
    printf("Total de saldo acreador. ");
    printf("%f", suma);

    getch();
    return 0;
}
