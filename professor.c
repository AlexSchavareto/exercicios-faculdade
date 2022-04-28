#include <stdio.h>

int main(){

	float n, media;
	int i;
	
	printf("Digite 10 valores\n");
	
	media = 0;
	for(i=1;i<=10;i++){
		scanf("%f", &n);
		media = media + n;
	}
	media = media / 10;
	
	printf("Media dos 10 valores = %.2f\n", media);

	return 0;
}