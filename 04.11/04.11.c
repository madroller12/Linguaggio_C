#include <stdio.h>

int main() {
    int array[10];
    int i, j, temp;

    printf("Inserisci %d numeri interi:\n", 10);
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    printf("\nArray ordinato in ordine crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}