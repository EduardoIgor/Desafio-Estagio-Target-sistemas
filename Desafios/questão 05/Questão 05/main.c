#include <stdio.h>
#include <stdlib.h>




   //Nessa questão de lógica, o que eu pensei seria deixa uma lampada ligada por um certo tempo até ela esquentar, depois desligaria ela e ligava outra lampada.
   // Depois disso, iria nas salas pela primera vez, se estiver acesa, seria o segundo interruptor, se estiver apagada e fria, seria o que eu não liguei, se estiver apaga e um pouco quente, seria o que eu liguei e deixei por um certo tempo.
   // depois de analisar qual seria o caso na primeira sala, iria pra segunda sala e dava outro veredito segundo as alternativas que sobrassem.
#define NUM_LAMPADAS 3

int main() {
    int interruptores[NUM_LAMPADAS] = {0, 1, 0};
    int lampadas[NUM_LAMPADAS] = {1, 0, 1};
    int lampadas_quentes[NUM_LAMPADAS] = {1, 0, 0};
    char interruptores_correspondentes[NUM_LAMPADAS] = {'C', 'C', 'C'};

    for (int i = 0; i < NUM_LAMPADAS; i++) {
        if (lampadas[i] == 1 && lampadas_quentes[i] == 1) {
            interruptores_correspondentes[i] = 'A';
        } else if (lampadas[i] == 0 && interruptores[i] == 1) {
            interruptores_correspondentes[i] = 'B';
        } else {
            interruptores_correspondentes[i] = 'C';
        }

        printf("A lampada %d esta ligada ao interruptor %c.\n", i + 1, interruptores_correspondentes[i]);
    }

    return 0;
}



