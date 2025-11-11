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
    printf("Numero succesivo di %d: %d\n", numero, n_s);
    n_s = n_s / 2;
    risultato = floor(log2(n_s));
    printf("Il logaritmo in base 2 di %d e' %.0f\n", n_s, risultato);
    int risultato2 = (int)risultato + 2;
    char arr[risultato2];
    for (int i = 0; i < risultato2-1; i++) {
        if (numero >= n_s) {
            arr[i] = '1';
            numero = numero - n_s;
        } else {
            arr[i] = '0';
        }
        n_s = n_s / 2;
        arr[i + 1] = '\0';
    }
    printf("La rappresentazione binaria e': %s\n", arr);

    return 0;
}