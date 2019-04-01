#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
	FILE *texto;
	char nometxt[50];

	strcpy(nometxt, argv[1]);
	strcat(nometxt, ".txt");
	texto = fopen(nometxt,"w");
	fprintf(texto, "Nome: %s\nIdade: %s anos\n",argv[1], argv[2]);
	fclose(texto);

	return 0;

}
