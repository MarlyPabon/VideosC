#include<stdio.h>
#include<conio.h>
#include<string.h>

int main (){

    char palabra[40];
    char letra;
    int m,n,i;
     char x;

    printf("Ingrese la palabra: ");
    gets(palabra);
    printf("Ingrese la letra que desea buscar dentro de la pablabra: ");
    scanf("% c", & letra);


    while(x!=NULL){
            if(strchr(palabra,letra)){
               printf("la nueva frase es: %s", strchr);
            }
    }



    getch();
    return 0;
}


//El ejercicio trata de ingresar una palabra,luego ingresar una letra y buscar la primera coincidencia la cual una vez encontrada mostrar la palabra a partir de la coincidencia.
// ejemplo: Si ingresamos la letra a e ingresamos la palabra Holanda donde se produce la coincidencia es en la "a" mostramos la palabra que queda: "anda".
char texto[250] = {};
printf("Introduzca un texto de maximo 250 caracteres: \n");
fgets(texto, sizeof(texto), stdin);

char letra;
printf("\nIntroduzca una letra: ");
scanf(" %c", &letra);

// strtok separa un texto usando un separador, en este caso espacio
for (char *palabra = strtok(texto, " "); palabra; palabra = strtok(NULL, " "))
{
    // Por cada palabra, buscamos la letra.
    for (char *caracter = palabra; *caracter; ++caracter)
    {
        if (*caracter == letra)
        {
            // Si encontramos la letra, mostramos y dejamos de buscar.
            printf("%s\n", palabra);
            break;
        }
    }
}
