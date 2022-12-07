#include<stdio.h>
#include<conio.h>

int main() {

    int num1, num2, num3;
    printf("Ingrese el primer Valor: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo Valor: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer Valor: ");
    scanf("%i", &num3);
    if(num1<10 && num2<10 && num3<10){
        printf("Todos los numeros son menores a diez");
    }else{
        printf("No son menores a 10");
    }
    getch();
    return 0;
}
//que todos sean menores
