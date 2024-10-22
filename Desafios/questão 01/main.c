#include <stdio.h>
#include <string.h>


int fibonacci(int n) {
    int a = 0, b = 1, c;


    if (n == 0 || n == 1) {
        return 1;
    }


    while (b <= n) {
        c = a + b;
        if (b == n) {
            return 1;
        }
        a = b;
        b = c;
    }
    return 0;
}



int main() {
    int number;
    int retorno = -1;
    char Valor_invalido;

    do{
    printf("\nQuestao 01\n");
    printf("Informe um numero: ");
    retorno = scanf("%d", &number);

    if(retorno == 0)
    {
        printf("Insira um numero valido\n");
        do {
            Valor_invalido = getchar();
        }while(Valor_invalido != '\n');
    }
    }while(retorno == 0);



    if (fibonacci(number)) {
        printf("O numero %d esta presente\n", number);
    } else {
        printf("O numero %d nao esta presente\n", number);
    }
return 0;
}




