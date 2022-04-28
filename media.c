//Escreva um programa que recebe 10 notas de alunos do usuário, 
//e mostra na tela a média das 5 melhores notas e a média das 5 piores notas.

#include <stdio.h>

int main(){
	
	int v[10], i, *p;
	
	p=v; //p=&v[0];
	
	printf("Digite 10 valores\n");
	
	for(i=0;i<10;i++){
		scanf("%d", p+i);
	}

	
	for(i=0;i<10;i++){
		printf("Valores: %d\n", p+i, *(p+i));
	}
	
	
	return 0;
}