
#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar( char nombres[5][41]){
    for (int f=0; f<5; f++){
        printf("Ingrese el nombre del articulo: ");
        gets(nombres[f]);
    }
}

void imprimir(char nombres[5][41]){
    printf("Listado completo de los nombres: \n");
    for(int f=0; f<5; f++){
        printf("%s \n", nombres[f]);
    }
}

void consultarNombres(char nombres[5][41]){
    char nom[41];
    int existe=0;
    printf("Ingrese un nombre a buscar: ");
    gets(nom);
    for(int f=0; f<5; f++){
        if(strcmp(nom, nombres[f])==0){
            existe=1;
        }
    }
    if (existe==1){
        printf("El nombre se encuentra almacenado en la matriz.");
    }else{
        printf("El nombre no se encuentra almacenado en la matriz.");
    }
}

int main(){
    char nombres[5][41];
    cargar(nombres);
    imprimir(nombres);
    consultarNombres(nombres);
    getch();
    return 0;
}
