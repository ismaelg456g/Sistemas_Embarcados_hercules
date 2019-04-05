#include <stdio.h>
#include "bib_arqs.h"

int main(){
    char *texto;

    texto = le_arq_texto("oi.txt");

    printf("%s", texto);

    return 0;
}
