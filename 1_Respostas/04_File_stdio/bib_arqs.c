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

char* le_arq_texto(char *nome_arquivo){
    FILE *arquivo;
    static char texto[100];
    int n=0;

    arquivo = fopen(nome_arquivo, "r");

    while(!feof(arquivo) && n<100){
        texto[n]=fgetc(arquivo);
        n++;
    }
    texto[n-1]='\0';

    fclose(arquivo);

    return texto;
}












