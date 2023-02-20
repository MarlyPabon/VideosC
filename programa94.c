#include<stdio.h>
#include<conio.h>

void MostrarHasta(int valor){
    if (valor<0){
        printf("ERROR. ");
    }else{
        int i;
        for(i=1; i<=valor; i++){
            printf("%i - ",i);
        }
    }
}

int main(){
    MostrarHasta(100);
    getch();
    return 0;
}
