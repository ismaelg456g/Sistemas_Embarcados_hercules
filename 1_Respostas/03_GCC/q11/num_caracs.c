#include <stdio.h>
#include "num_caracs.h"

int Num_Caracs(char *string){
	int cont;
	int i=0;
	while(string[i] != '\0'){
		i++;
	}
	
	return i;
}
