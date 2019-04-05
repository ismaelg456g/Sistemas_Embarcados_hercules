#include <stdio.h>
#include "bib_arqs.h"

int main(int argc, char **argv){
    char *texto;

    texto = le_arq_texto(argv[1]);

    printf("%s", texto);

    return 0;
}
