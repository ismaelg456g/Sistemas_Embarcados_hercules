#include <stdio.h>
#include <string.h>
#define MAX 100
int main(){

    int arquivo;
    char nome[MAX];
    int idade;

    printf("Digite o seu nome: ");
    gets(nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    arquivo = open("Eu.txt", O_WRONLY | O_CREAT);


    write(arquivo, nome, strlen(nome));

    close(arquivo);

    return 0;
}

