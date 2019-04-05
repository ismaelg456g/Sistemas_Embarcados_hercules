#include "bib_arqs.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int tam_arq_texto(char *nome_arquivo){

    int arq;
    int tam_arq;

    arq = open(nome_arquivo, O_RDWR);

    tam_arq=lseek(arq, 0, SEEK_END);

    close(arq);

    return tam_arq;
}

char* le_arq_texto(char *nome_arquivo){

    static char texto[100];
    int arq, tamanho;

    tamanho = tam_arq_texto(nome_arquivo);

    arq = open(nome_arquivo, O_RDWR);

    read(arq, texto, tamanho);

    texto[tamanho]= '\0';

    close(arq);

    return texto;
}

