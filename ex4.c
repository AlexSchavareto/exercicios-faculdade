#include <stdio.h>
#include <string.h> 
//#include <conio.h>
#include <stdlib.h>

void bolha(char *vet, int tam);

int main (void)
{
	char *nomefacul = malloc(sizeof(*nomefacul) * 7);

 	nomefacul[0] = 'u';
  	nomefacul[1] = 'n';
  	nomefacul[2] = 'i';
  	nomefacul[3] = 'n';
  	nomefacul[4] = 'o';
  	nomefacul[5] = 'v';
  	nomefacul[6] = 'e';
   
    
    bolha(nomefacul,7);
   
	int i =0;
	for(i=0;i<7;i++){
		printf("%c",nomefacul[i]);
	}
   
	return 0;
}


void bolha(char *vet, int tam){
	
	int a, b, temp;
	
	for(a=1;a<tam;a++){
		for(b=tam-1;b>=a;b--){
			if((int)vet[b-1] > (int)vet[b]){
				temp = vet[b-1];
				vet[b-1] = vet[b];
				vet[b] = temp;
			}
		}
	}
}




