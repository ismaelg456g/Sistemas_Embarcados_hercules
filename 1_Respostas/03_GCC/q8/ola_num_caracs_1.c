#include <stdio.h>
#include "num_caracs.h"

int main(int argc, char **argv){
	int i;
	int cont;

	for(i=1; i<argc; i++){
		cont = Num_Caracs(argv[i]);
		printf("%s / Número de caracteres: %d\n", argv[i], cont);
	}

	return 0;
}
