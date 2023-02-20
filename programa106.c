//Definir un vector de 5 componentes de tipo float en la función main que representen las alturas de 5 personas.
//Desarrollar las siguientes funciones:
// 1-Carga del vector.
// 2-Retornar el promedio del vector.
// ---float calcularPromedio(float alturas[5])
// 3-Contar y luego imprimir cuántas personas son más altas que el promedio y cuántas más bajas.
// ---void altasBajas(float alturas[5],float pro)



#include<stdio.h>
#include<conio.h>

void cargar(float alturas[5]){
    int x;
    for (x=0; x<5; x++){
        printf("Ingrese las alturas: ");
        scanf("%f", &alturas[x]);
    }
}

float calcularPromedio(float alturas[5]){
    float suma=0;
    float promedio;
    for(int x=0; x<5; x++){
        suma=suma+alturas[x];
    }
    promedio=suma/5;
    return promedio;
}

void AltaBajas (float alturas[5], float prom){
    int altos=0;
    int bajos=0;
    int x;
    for(x=0; x<5; x++){
        if(alturas[x]>prom){
            altos++;
        }else{
            if (alturas[x]<prom){
                bajos++;
            }
        }
    }
    printf("Cantidad de personas mas altas al promedio es: %i \n", altos);
    printf("Cantidad de personas mas bajas al promedio es: %i \n", bajos);

}


int main(){

    float prom;
    float alturas[5];
    cargar(alturas);
    prom=calcularPromedio(alturas);
    printf("Altura promedio de las personas es de: %0.2f \n", prom);
    AltaBajas(alturas, prom);

    getch();
    return 0;
}
