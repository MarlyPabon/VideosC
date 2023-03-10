#include<stdio.h>
#include<conio.h>
#include<string.h>

void cargar( char nombres[5][41]){
    for (int f=0; f<5; f++){
        printf("Ingrese el nombre de la persona: ");
        gets(nombres[f]);
    }
}

void imprimir(char nombres[5][41]){
    printf("Listado completo de los nombres: \n");
    for(int f=0; f<5; f++){
        printf("%s \n", nombres[f]);
    }
}

void menor(char nombres[5][41]){
    char men[41];
    strcpy(men, nombres[0]);
        for(int f=0; f<5; f++){
        if(strcmp(nombres[f], men)<0){ // se intercambia porque es menor
            strcpy(men,nombres[f]);
            }
        }
        printf("Nombre menor alfabeticamente es: %s", men);

}

int main(){
    char nombres[5][41];
    cargar(nombres);
    imprimir(nombres);
    menor(nombres);
    getch();
    return 0;
}
