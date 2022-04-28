#include <stdio.h>

int main(){

    int n, i, maior;

    printf("Digite 10 valores\n");

    for(i=1;i<=10;i++){
    scanf("%d", &n);
    if(i==1){
        maior = n;
    }else{
        if(n > maior){
            maior = n;
        }
    }
 }

printf("Maior valor = %d\n", maior);
    

return 0;
}
