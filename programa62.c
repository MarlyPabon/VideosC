#include<stdio.h>
#include<conio.h>

int main (){

    int vec[10];
    int i;
    int orden;
    for(i=0; i<10;i++){
        printf("Ingrese los valores: ");
        scanf("%i", &vec[i]);
    }
    orden=1;

    for(i=0; i<9; i++){
        if(vec[i+1]<vec[i]){
            orden=0;
            break;
        }
    }

    if (orden==1){
        printf("El vector esta ordenado de menor a mayor. ");
    }else{
        printf("El vector no esta ordenado de menor a mayor. ");
    }

    getch();
    return 0;
}
