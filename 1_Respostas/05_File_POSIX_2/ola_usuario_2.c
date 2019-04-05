#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv){

    int arquivo;
    char nome_arquivo[100];

    strcpy(nome_arquivo, argv[1]);
    strcat(nome_arquivo, ".txt");

    arquivo = open(nome_arquivo, O_WRONLY | O_CREAT);

    write(arquivo, "Nome: ", strlen("Nome: "));
    write(arquivo, argv[1], strlen(argv[1]));
    write(arquivo, "\nIdade: ", strlen("\nIdade: "));
    write(arquivo, argv[2], strlen(argv[2]));
    write(arquivo, " anos", strlen(" anos"));

    close(arquivo);

    return 0;
}
