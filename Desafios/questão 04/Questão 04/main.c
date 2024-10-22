#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("a) ");
    for (int i = 1; i < 8; i += 2) {
        printf("%d ", i);
    }
    printf("%d\n", 9);


    printf("b) ");
    int b = 2;
    for (int i = 0; i < 6; i++) {
        printf("%d ", b);
        b *= 2;
    }
    printf("%d\n", b);


    printf("c) ");
    for (int i = 0; i <= 6; i++) {
        printf("%d ", i * i);
    }
    printf("%d\n", 49);


    printf("d) ");
    for (int i = 2; i <= 8; i += 2) {
        printf("%d ", i * i);
    }
    printf("%d\n", 100);


    printf("e) ");
    int a = 1, fib = 1, next;
    printf("%d %d ", a, fib);
    for (int i = 2; i < 7; i++) {
        next = a + fib;
        printf("%d ", next);
        a = fib;
        fib = next;
    }
    printf("%d\n", next + a);

    printf("Números que começam com a letra 'd':\n");

// esse aqui demorei um pouco pra entender haha.
    for (int i = 1; i <= 1000; i++) {

        if (i == 2) {
            printf("%d (dois)\n", i);
        } else if (i == 10) {
            printf("%d (dez)\n", i);
        } else if (i == 12) {
            printf("%d (doze)\n", i);
        } else if (i == 16) {
            printf("%d (dezesseis)\n", i);
        } else if (i == 17) {
            printf("%d (dezessete)\n", i);
        } else if (i == 18) {
            printf("%d (dezoito)\n", i);
        } else if (i == 19) {
            printf("%d (dezenove)\n", i);
        } else if (i == 200) {
            printf("%d (duzentos)\n", i);
        }
    }

    return 0;
}
