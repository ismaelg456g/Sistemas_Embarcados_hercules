#include <stdio.h>
#include <string.h>
#include "bib_arqs.h"

int main(int argc, char **argv){
    char *texto;
    int n, count, count_aux1, count_aux2, ocorrencias=0;

    texto = le_arq_texto(argv[2]);
    n = tam_arq_texto(argv[2]);

    for(count = 0; count<n; count++){
        if(argv[1][0] == texto[count]){
            count_aux1 = count;
            count_aux2 = 0;
            ocorrencias++;

            while(count_aux2<strlen(argv[1]) && count_aux1<strlen(texto)){
                if(argv[1][count_aux2]!=texto[count_aux1]){
                    ocorrencias-=1;
                    count_aux1= strlen(argv[1]);
                }
                else{
                    count_aux1++;
                    count_aux2++;
                }
            }
        }
    }

    printf("'%s' ocorre %d vezes em '%s'\n", argv[1], ocorrencias, argv[2]);

    return 0;
}
