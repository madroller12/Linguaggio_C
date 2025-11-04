#include <stdio.h>

int main() {
    // Dichiara un array di 10 numeri interi
    int array[10];
    int i, j, temp;

    // Chiede all'utente di inserire 10 numeri
    printf("Inserisci %d numeri interi:\n", 10);
    // Ciclo per l'inserimento dei numeri
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Implementazione del Bubble Sort per ordinare l'array
    for (i = 0; i < 10 - 1; i++) {
        // Confronta coppie di elementi adiacenti
        for (j = 0; j < 10 - i - 1; j++) {
            // Se l'elemento corrente è maggiore del successivo, li scambia
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    // Stampa l'array ordinato
    printf("\nArray ordinato in ordine crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}