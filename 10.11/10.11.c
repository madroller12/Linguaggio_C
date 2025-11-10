#include <stdio.h>

#define N 10

/**
 * @brief Trova l'indice dell'elemento più piccolo in un array,
 * partendo da una posizione 'start'.
 * * @param arr L'array in cui cercare.
 * @param start La posizione da cui iniziare la ricerca.
 * @param n La dimensione totale dell'array.
 * @return L'indice (int) dell'elemento minimo trovato.
 */
int trovaIndiceMinimo(int arr[], int start, int n) {
    // 1. Assume che il minimo sia all'inizio (posizione 'start')
    int min_idx = start;
    int j;

    // 2. Questo ciclo sostituisce il vecchio "ciclo j"
    // Cerca l'effettivo minimo nel resto dell'array
    for (j = start + 1; j < n; j++) {
        
        // 3. Se trova un elemento più piccolo, aggiorna l'indice
        if (arr[j] < arr[min_idx]) {
            min_idx = j;
        }
    }

    // 4. Ritorna l'indice del minimo trovato
    return min_idx;
}

// Funzione principale
int main() {
    int array[N];
    int i, min_idx, temp;

    // --- FASE 1: Riempimento (Identica a prima) ---
    printf("Inserisci %d numeri interi:\n", N);
    for (i = 0; i < N; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // --- FASE 2: Ordinamento (Modificato) ---

    // Ciclo esterno (identico a prima)
    for (i = 0; i < N - 1; i++) {
        
        // **LA MODIFICA È QUI:**
        // Invece di un ciclo 'j', chiamiamo la nostra nuova funzione.
        // Gli diciamo: "cerca nell'array, partendo dalla posizione i".
        min_idx = trovaIndiceMinimo(array, i, N);

        // --- FASE 3: Scambio (Swap) (Identica a prima) ---
        // Scambia l'elemento alla posizione 'i' con il minimo trovato
        
        temp = array[i];
        array[i] = array[min_idx];
        array[min_idx] = temp;
    }

    // --- FASE 4: Stampa (Identica a prima) ---
    printf("\nArray ordinato (con funzione) in ordine crescente:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}