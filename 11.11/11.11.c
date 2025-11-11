#include <stdio.h>
#include <math.h>

int main() {
    int numero, n_s = 1;
    double risultato;
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero);
    while (1) {
        if (numero >= n_s) {
            n_s = n_s * 2;
        } else {
            break;
        }
    }
    printf("Fine del programma. Numero: %d\n", n_s);
    n_s = n_s / 2;
    risultato = floor(log2(n_s));
    printf("Il logaritmo in base 2 di %d e' %.0f\n", n_s, risultato);
    int risultato2 = (int)risultato;
    risultato2 = risultato2 + 1;
    char arr[risultato2];


    return 0;
}