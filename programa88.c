#include<stdio.h>
#include<conio.h>

void CalcularMenor(){
    int num1, num2, num3;
    printf("Ingrese el primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer valor: ");
    scanf("%i", &num3);

    if(num1<num2 && num1<num3){ //esto es y
        printf("El numero menor es: %i \n", num1);
    }else{
        if(num2<num3){
          printf("El numero menor es: %i \n", num2);
        }else{
        printf("El numero menor es: %i \n", num3);
    }

}
}
void separacion(){
    printf("--------------------------------------------------------- \n");
}

int main(){

    int i;
    for(i=0;i<3;i++){
        CalcularMenor();
    }


    getch();
    return 0;
}
