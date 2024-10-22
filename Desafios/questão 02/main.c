#include <stdio.h>
#include <stdlib.h>

int main (){
    char str[100];
    int contador = 0;


    printf("Digite uma frase: ");
    fgets(str, sizeof(str), stdin);


    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            contador++;
        }
    }


    if (contador > 0) {
        printf("A letra 'a ou A' ocorre %d vez(es) na frase.\n", contador);
    } else {
        printf("A letra 'a ou A' nao esta presente na frase.\n");
    }

    return 0;
}
