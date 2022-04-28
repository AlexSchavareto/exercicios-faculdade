#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bolha(int *vet, int tam);
void bolhabreak(int *vet, int tam);
void selecao(int *vet, int tam);
void insercao(int *vet, int tam);
int separa (int v[], int p, int r);
void quicksort (int v[], int p, int r);

int troca = 0, comp = 0;

#define TAM 9

int main(){
  int i, v[9] = {9, 2, 0, 1, 2, 3, 9, 3, 0};
  clock_t ini, fim;
	
	ini = clock();

  // bolha(v, TAM);
  // insercao(v, TAM);
  selecao(v, TAM);

  fim = clock();
		
	printf("Foram realizadas Selecao %d trocas e %d comparacoes\n", troca, comp);
	printf("Tempo em segundos para ordenar: %g\n", (double)(fim-ini)/CLOCKS_PER_SEC);
	
	return 0;
}

void bolha(int *vet, int tam){
	
	int a, b, temp;
	
	for(a=1;a<tam;a++){
		for(b=tam-1;b>=a;b--){
			comp++;
			if(vet[b-1] > vet[b]){
				troca++;
				temp = vet[b-1];
				vet[b-1] = vet[b];
				vet[b] = temp;
			}
		}
	}
}

void selecao(int *vet, int tam){
	
	int a, b, menor, posmenor, fTroca;
		
	for(a=0;a<TAM;a++){
		fTroca = 0;
		menor = vet[a];
		posmenor = a;	
		for(b=a+1;b<TAM;b++){
			comp++;
			if (vet[b] < menor){
				fTroca = 1;
				menor = vet[b];
				posmenor = b;
			}
		}
		if(fTroca == 1){
			troca++;
			vet[posmenor] = vet[a];
			vet[a] = menor;
		}
	}
}

void insercao(int *vet, int tam){
	
	int a, b, t;
	
	for(a=1;a<TAM;a++){
		t = vet[a];
		comp++;
		for(b=a-1;b>=0 && t<vet[b];b--){
			comp++;
			troca++;
			vet[b+1] = vet[b];
		}
		vet[b+1] = t;
		
	}
	troca = troca/2;
	
}

int separa (int v[], int p, int r) 
{
   int c = v[p], i = p+1, j = r, t;
   while (1) {
      while (i <= r && v[i] <= c){
      	comp++;
			++i;
		}
      while (c < v[j]){
      	comp++;
			--j;
		}
      if (i >= j)
			break;
		troca++;
      t = v[i];
		v[i] = v[j];
		v[j] = t;
      ++i;
		--j;
   }
   v[p] = v[j], v[j] = c;
   return j;
}

void quicksort (int v[], int p, int r)
{
   int j;                         // 1
   if (p < r) {                   // 2
      j = separa (v, p, r);       // 3
      quicksort (v, p, j-1);      // 4
      quicksort (v, j+1, r);      // 5
   }
}
