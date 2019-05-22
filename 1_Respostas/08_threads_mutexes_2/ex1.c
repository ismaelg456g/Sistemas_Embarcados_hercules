#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *recebe_valores(void *valores);

int main(){
    pthread_t thread1;
    int valores=1;
    pthread_create(&thread1, NULL, &recebe_valores, &valores);

    for(valores=1; valores<=10; valores++){
        sleep(1);
    }
    return 0;
}

void *recebe_valores(void *valores){
    int aux=0;
    int *valor = (int *)valores;

    while(*valor!=10){
        if(*valor!=aux){
            aux=*valor;
            printf("%d\t", *valor);
        }
    }
    printf("%d\n", *valor);
    return NULL;
}
