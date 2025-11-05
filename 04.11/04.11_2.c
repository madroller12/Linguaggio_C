/* * Compito: Selection Sort
 */

// Inclusione della libreria standard di Input/Output
#include <stdio.h> 

// Definizione di una costante 'N' per la dimensione dell'array
#define N 10 

// Funzione principale del programma
int main() {
    // Dichiarazione dell'array di N (10) elementi interi
    int array[N];
    
    // Dichiarazione delle variabili contatore (i, j)
    int i, j;
    
    // Dichiarazione della variabile per memorizzare l'indice dell'elemento minimo
    int min_idx;
    
    // Dichiarazione della variabile temporanea per lo scambio (swap)
    int temp;

    // --- FASE 1: Riempimento dell'array ---

    // Stampa un messaggio per l'utente
    printf("Inserisci %d numeri interi:\n", N);
    
    // Ciclo esterno per scorrere l'array (da 0 a 9)
    for (i = 0; i < N; i++) {
        // Stampa il prompt per l'elemento corrente (es. "Elemento 1:")
        printf("Elemento %d: ", i + 1);
        
        // Legge l'input dell'utente e lo salva nella posizione 'i' dell'array
        scanf("%d", &array[i]);
    }

    // --- FASE 2: Algoritmo di Selection Sort ---

    // Ciclo esterno: scorre l'array per trovare il minimo per ogni posizione
    // Si ferma a N-1 perché l'ultimo elemento sarà automaticamente ordinato
    for (i = 0; i < N - 1; i++) {
        
        // Assume che l'elemento minimo si trovi all'inizio (posizione 'i')
        min_idx = i; 

        // Ciclo interno: cerca l'effettivo minimo nel resto dell'array
        // Parte dall'elemento successivo a 'i' (i + 1)
        for (j = i + 1; j < N; j++) {
            
            // Confronto: se trova un elemento più piccolo di quello memorizzato in min_idx
            if (array[j] < array[min_idx]) {
                // Aggiorna min_idx con la nuova posizione del minimo
                min_idx = j;
            }
        }

        // --- FASE 3: Scambio (Swap) ---
        // Scambia l'elemento alla posizione 'i' con il minimo trovato (min_idx)
        
        // Salva il valore alla posizione 'i' nella variabile temporanea
        temp = array[i];
        
        // Mette il valore minimo (trovato a min_idx) nella posizione 'i'
        array[i] = array[min_idx];
        
        // Mette il vecchio valore di 'i' (salvato in temp) nella posizione 'min_idx'
        array[min_idx] = temp;
    }

    // --- FASE 4: Stampa dell'array ordinato ---

    // Stampa un messaggio di intestazione
    printf("\nArray ordinato (Selection Sort) in ordine crescente:\n");
    
    // Ciclo per scorrere e stampare tutti gli elementi dell'array ordinato
    for (i = 0; i < N; i++) {
        // Stampa l'elemento corrente seguito da uno spazio
        printf("%d ", array[i]);
    }
    
    // Stampa un carattere "a capo" per pulizia
    printf("\n");

    // Ritorna 0 per indicare che il programma è terminato con successo
    return 0;
}