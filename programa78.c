#include<stdio.h>
#include<conio.h>
#include<string.h>

int main (){
    char nombre1[31];
    char nombre2[31];
    printf("Ingrese primer nombre: ");
    gets(nombre1);
    printf("Ingrese segundo nombre: ");
    gets(nombre2);

    if(strcmp(nombre1,nombre2)==0){//si los dos nombres son iguales osea =0 es verdadero
        printf("Los dos nombres son exactamentes iguales.");
    }else{
        if(strcmp(nombre1,nombre2)>0){//si alguna de las dos es alfabeticamente mayor en valor ASSCII.
         printf("%s es mayor alfabeticamente.", nombre1);
        }else{
            printf("%s es mayor alfabeticamente.", nombre2);
        }
    }

    getch();
    return 0;
}
