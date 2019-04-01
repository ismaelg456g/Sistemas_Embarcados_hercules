#include <stdio.h>

int main(){
	FILE *ola;
	ola= fopen("ola_mundo.txt","w");
	fprintf(ola, "Ola mundo!\n");
	fclose(ola);

	return 0;
}
