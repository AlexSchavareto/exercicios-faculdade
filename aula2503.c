/* 2) Manipulação das funções da biblioteca string.h: puts, 
		gets, strcpy, strcat, strlen, strcmp.*/
		
#include<stdio.h>
#include<string.h>
		
int main(){
	
	char str1[20], str2[20], res[40];
		
	int i;
	
	puts("Digite duas strings");
	
	gets(str1);
	gets(str2);
	
	/* Compara duas strings e retorna 0 se forem iguais. */
	i = strcmp(str1, str2);
if(i==0){
		puts("Strings digitadas iguais");
	}else{
		puts("Strings digitadas diferentes");
	}
	
	puts("Digite uma string");
	gets(str1);
	
	/* Retorna o tamanho da string. */
	i = strlen(str1);
	
	printf("A string digitada tem %d caracteres\n", i);
	
	/* Copia o conteúdo de str1 em res */
	strcpy(res,str1);
	
	puts(res);
puts("Digite duas strings");
	gets(str1);
	gets(str2);
	
	strcpy(res, str1);
	puts(res);
	strcat(res, " ");
	puts(res);
	/* Concatena a str2 em res. */
	strcat(res, str2);
	
	puts(res);
	
		
	return 0;
}
