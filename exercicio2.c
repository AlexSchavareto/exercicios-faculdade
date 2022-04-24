/* 6) Escreva um programa que o usuário digita duas matrizes 3 x 3, e a 
		soma dessas matrizes é impressa na tela. */


#include <stdio.h>

int main(){
	
	int A[2][3], i, j;
	
	/*printf("%d ", A[0][0]);
	printf("%d ", A[0][1]);
	printf("%d ", A[0][2]);
	
	printf("\n");
	
	printf("%d ", A[1][0]);
	printf("%d ", A[1][1]);
	printf("%d ", A[1][2]);*/

    printf("Digite 6 valores\n");

    
	for(i=0;i<2;i++){
            scanf("%d", &i);
		for(j=0;j<3;j++){
                scanf("%d", &j);
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}
