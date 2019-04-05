#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){

    int fd;

    fd = open("ola.bin", O_WR|O_CREAT);
    if(fd==-1)
        printf("erro");
    write(fd, "Ola Mundo\n", strlen("Ola Mundo\n"));

    close(fd);

    return 0;
}
