#include <stdio.h>
#include <stdlib.h>

int main()
{
    int indice = 12;
     int soma = 0;
     int k = 1;

    while (k < indice)
    {
    k = k + 1;
    soma = soma + k;
    }
     printf("%d", soma);


}
// O inteiro 'k' é incrementado 12 vezes (comando diz que o enquanto 'k' for menor que 'indice' ele deve ser incrementado) e será armazenado em 'soma'.
// Após o 12° incremento, a variavel 'soma' retornou o numero 77.
