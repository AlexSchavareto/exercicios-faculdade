#include <stdio.h>

int main(){


    int a, b, res;

    {
        for(;;){

        printf("Digite dois valores\n");
        scanf("%d", &a);
        scanf("%d", &b);
        
        res = a+b;

        printf("%d + %d = %d\n", a, b, res);

        printf("Voê deseja fazer outra operação?\n"
                "Digite s para sim\n");

                getchar();
                

    }

    }

    return 0;
}