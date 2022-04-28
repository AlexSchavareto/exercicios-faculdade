
/*
Exerc�cio 3: O jogo da mina. Declare uma matriz com 10 linhas e 10 colunas e usando o processo de gera��o de n�meros aleat�rios visto em classe, 
preencha a matriz com valores 0 e 1. Por exemplo, 
para preencher a primeira linha e coluna com um valor aleat�rio 0 ou 1, 
usa-se o c�digo A[0][0] = rand()%2. 
Depois de preenchida, pe�a para o usu�rio digitar uma linha e uma coluna da matriz. O programa deve imprimir na tela
 quantos valores iguais a 1 existem nos 8 vizinhos mais pr�ximos da posi��o (linha, coluna) digitada pelo usu�rio.
*/

#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#define TAM 10
int main(){
	
	int A[TAM][TAM], i, j;
	int linha, coluna;
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			A[i][j] = ( rand() % 2);
		}
	}
	
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
	printf("Digite linha e coluna que voce deseja pesquisar (0 a %d)",TAM-1);
	printf("\n");
	printf("Linha:");	
	scanf("%d",&linha);
	printf("Coluna: ");
	scanf("%d",&coluna);
		
	
	int soma = 0;
	
	printf("vizinhos: ");
	
	
	if(coluna > 0){
		printf("\n");
		printf("[%d][%d] - %d",linha, coluna-1, A[linha][coluna-1]);
		if (A[linha][coluna-1] == 1) soma = soma + 1;
		
	}
	
	if(coluna < TAM){
		printf("\n");
		printf("[%d][%d] - %d ",linha, coluna+1, A[linha][coluna+1]);
		if(A[linha][coluna+1] == 1) soma = soma + 1; 
	}
	
	if(linha > 0){
		printf("\n");
		printf("[%d][%d] - %d ",linha-1, coluna, A[linha-1][coluna]);
		if(A[linha-1][coluna] == 1) soma = soma + 1;
	}
	
	if(linha < TAM){
		printf("\n");
		printf("[%d][%d] - %d ",linha+1, coluna, A[linha+1][coluna]);
		if(A[linha+1][coluna] == 1) soma = soma + 1;

	}
	
	
	if(coluna > 0 && linha > 0){
		printf("\n");
		printf("[%d][%d] - %d ",linha-1, coluna-1, A[linha-1][coluna-1]);
		if (A[linha-1][coluna-1] == 1) soma = soma + 1;
	}
	
	if(coluna > 0 && linha < TAM){
		printf("\n");
		printf("[%d][%d] - %d ",linha+1, coluna-1, A[linha+1][coluna-1]);
		if (A[linha+1][coluna-1] == 1) soma = soma + 1;
	}
	
	if(coluna < TAM && linha < TAM){
		printf("\n");
		printf("[%d][%d] - %d ",linha+1, coluna+1, A[linha+1][coluna+1]);
		if (A[linha+1][coluna+1] == 1) soma = soma + 1;
	}
	
	if(coluna < TAM && linha > 0){
		printf("\n");
		printf("[%d][%d] - %d ",linha+1, coluna-1, A[linha+1][coluna-1]);
		if (A[linha+1][coluna-1] == 1) soma = soma + 1;
	}
	
	printf("\n");
	printf("Numeros 1 ao redor: %d", soma);
			
	

	return 0;
}

