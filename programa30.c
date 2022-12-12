#include<stdio.h>
#include<conio.h>

int main() {

    int x, cantidad, n;
    float largo;
    x=1;
    cantidad=0;
    printf("Cuantas piezas va a procesar: ");
    scanf("%i", &n);
    while(x<=n){
        printf("Ingrese la medida de la pieza: ");
        scanf("%f", &largo);
        if(largo>=1.20 && largo<=1.30){
            cantidad=cantidad+1;
        }
        x=x+1;
    }
    printf("La cantidad de piezas aptas son: ");
    printf("%i", cantidad);

    getch();
    return 0;
}

//una planta que fabrica perfiles de hierro posee un lote de n piezas.
//hacer un programa que pida ingresar por teclado la cantidad de piezas a procesar
//y luego ingresar la longitud de cada hierro, sabiendo que la pieza tiene que estar en una longitud
//incluida de rango de 1.20 y 1.30
