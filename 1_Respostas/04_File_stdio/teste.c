#include <stdio.h>
#include "bib_arqs.h"

int main(){
    FILE *arq;
    int tamanho;

    arq = fopen("batata.txt", "w");
    fprintf(arq,"oi");
    fclose(arq);

    tamanho = tam_arq_texto(nome);
    printf("O tamanho é: %d", tamanho);

    return 0;
}
