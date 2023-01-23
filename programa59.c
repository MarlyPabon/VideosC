#include<conio.h>
#include<stdio.h>

int main(){

    int i;
    int vec[8];
    for(i=0; i<8; i++){
        printf("INGRESE EL VALOR: ");
        scanf("%i",&vec[i]);
    }
    int suma=0;
    for(i=0; i<8; i++){
        suma=suma+vec[i];
    }
    printf("la suma de los 8 valores es de: %i \n" ,suma);


    int may36=0;
    for(i=0; i<8; i++){
        if(vec[i]>36){
            may36=may36+vec[i];
        }
    }
    printf("Elementos mayores a 36 son: %i \n" , may36);

    int cant=0;
    for(i=0; i<8; i++){
    if(vec[i]>50){
        cant++;
        }
    }
    printf("Elementos mayores a 50 son: %i \n" , cant);


    getch();
    return 0;
}
