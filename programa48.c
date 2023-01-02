#include<stdio.h>
#include<conio.h>

int main() {

    int i, n, x, y, cont1=0, cont2=0, cont3=0, cont4=0;
    printf("Cantidad de puntos a procesar: ");
    scanf("%i", &n);
    for(i=1; i<=n; i++){
        printf("ingrese la coordenada x: ");
        scanf("%i", &x);
        printf("ingrese la coordenada y: ");
        scanf("%i", &y);

        if(x>0 && y>0){
                cont1++;
        }else{
            if(x<0 && y>0){
                cont2++;
            }else{
                if(x<0 && y<0){
                    cont3++;
                }else{
                    if(x>0 && y<0){
                        cont4++;
                    }
                }
            }
        }
    }

    printf("Cantidad de puntos del primer cuadrante son de: ");
    printf("%i", cont1);
    printf("\n");
    printf("Cantidad de puntos del segundo cuadrante son de: ");
    printf("%i", cont2);
    printf("\n");
    printf("Cantidad de puntos del tercer cuadrante son de: ");
    printf("%i", cont3);
    printf("\n");
    printf("Cantidad de puntos del cuarto cuadrante son de: ");
    printf("%i", cont4);
    printf("\n");

    getch();
    return 0;
}

//programa que pida ingresae coordenadas(x,y)), informar cuantos puntos se han ingresado en el primer
// segundo, tercer y cuarto  cuadrante, al comenzar el programa se debe ingresar la cantidad de puntos
