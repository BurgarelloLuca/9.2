#include <stdio.h>
#include "mieFunzioni.h"
int main(void) {
    float prezzo,sconto;
    printf("inserire il prezzo");
    scanf("%f",&prezzo);
    printf("inserire la percentuale di sconto");
    scanf("%f",&sconto);
    printf("%.2f",prezzoScontato(prezzo,sconto));
}