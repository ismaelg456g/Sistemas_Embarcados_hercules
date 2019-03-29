#include <stdio.h>
#include "bib_arqs.h"

int tam_arq_texto(char *nome_arquivo){
    FILE *arq;
    int tamanho;

    arq = fopen(nome_arquivo, "r");
    fseek(arq, 0, SEEK_END);
    tamanho = ftell(arq);
    fclose(arq);

    return tamanho;
}
