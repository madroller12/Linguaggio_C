#include <stdio.h>

int main(){
    int pippo[10];
    int i;

    for (i = 0; i < 3; i++){
        printf("Inserisci un numero intero \n");
        scanf("%d", &pippo[i]);
    }

    printf("L'ultimo numero è %d \n", pippo[i-1]);

    return 0;
}