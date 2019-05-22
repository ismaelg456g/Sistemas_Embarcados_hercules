#include <pthreads.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define TAM_VET 50000

int main(){
	long int v[TAM_VET];
	ptread_t thread;

	for(i=0; i<TAM_VET; i++){
		v[i]=random();
	}

	pthread_create(&thread, NULL, &calcula_max_thread, v);
	printf("Pelo método (a):\n%ld\n", calcula_max(v, TAM_VET));


	return 0;
}

void* calcula_max_thread(void* vet){
	long int* v = (long int *)vet;



	return NULL;
}

long int calcula_max(long int *vetor, int tamanho){
	long int maximo=*(vetor);
	int i;
	for(i=0; i<tamanho;i++){
		if(maximo<*(vetor+i)){
			maximo=*(vetor+i);
		}
	}

	return maximo;
}
