#include<stdio.h>
#include<conio.h>


void MostrarVocal (char letra){



    if(letra=='A' || letra=='E'  || letra=='I' || letra=='O'|| letra=='U'
       || letra=='a'|| letra=='e'|| letra=='i'|| letra=='o'|| letra=='u'){

        printf("La letra %c es una vocal. \n ", letra);
    }else{
        printf("La letra %c no es una vocal. \n", letra);
    }
}

void main(){
    char c;
    for(c='A';c<='z';c++){
        MostrarVocal(c);
    }

    getch();
    return 0;
}
