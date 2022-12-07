#include<stdio.h>
#include<conio.h>

int main() {

    int x, y;
    printf("Ingrese el Valor de X: ");
    scanf("%i", &x);
    printf("Ingrese el Valor de Y: ");
    scanf("%i", &y);
    if(x>0 && y>0){
        printf("Las coordenadas ingresadas corresponden al primer cuadrante. ");
    }else{
        if(x<0 && y>0){
            printf("Las coordenadas ingresadas corresponden al segundo cuadrante. ");
        }else{
            if(x<0 && y<0){
                printf("Las coordenadas ingresadas corresponden al tercer cuadrante. ");
            }else{
                if(x>0 && y<0){
                    printf("Las coordenadas ingresadas corresponden al cuarto cuadrante. ");
                }else{
                    printf("Las coordenadas ingresadas estan sobre el eje. ");
                }
            }
        }
    }
    getch();
    return 0;
}
