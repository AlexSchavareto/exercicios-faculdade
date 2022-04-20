#include <stdio.h>
#include <string.h>

void maiuscula(char *str, int tam);

int main(){

    char str[50];

    puts("Digite uma palavra");
    gets(str);

    maiuscula(str, strlen(str));

    puts(str);

    return 0;
}

void maiuscula(char *str, int tam){

    int i;

    for(i=0;i<tam;i++){
        if(str[i])
    }

}

