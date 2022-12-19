#include<stdio.h>
#include<conio.h>

int main() {

    int n,x,cont1,cont2;
    float sueldo,gastos;
    cont1=0;
    cont2=0;
    gastos=0;
    x=1;
    printf("ingrese cuantos empleados tiene la empresa: ");
    scanf("%i", &n);
    while(x<=n){
        printf("Ingrese el sueldo del empleado: ");
        scanf("%f", &sueldo);
        if(sueldo<=300){
            cont1=cont1+1;
        }else{
            cont2=cont2+1;
        }
        gastos=gastos+sueldo;
        x=x+1;
    }
    printf("Cantidad de empleados con sueldo entre 100 y 300: ");
    printf("%i",cont1);
    printf("\n");
    printf("Cantidad de empleados con sueldo mayor de 300: ");
    printf("%i",cont2);
    printf("\n");
    printf("Gastos total de la empresa en sueldos: ");
    printf("%f",gastos);

    getch();
    return 0;
}
