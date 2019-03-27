#include <stdio.h>
#include <string.h>

int main(){
	FILE *batata;
	char nome[50], nometxt[55];
	int idade;
	
	printf("Digite o seu nome: ");
	gets(nome);
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	strcpy(nometxt,nome);
	strcat(nometxt, ".txt");

	batata = fopen(nometxt, "w");
	fprintf(batata, "Nome: %s\nIdade: %d anos", nome, idade);
	fclose(batata);

	return 0;
}
