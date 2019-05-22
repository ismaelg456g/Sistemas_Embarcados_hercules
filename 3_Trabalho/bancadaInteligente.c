#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>

pid_t scanner;

void mataDsreader(){
  kill(scanner, SIGINT);
}

int main(){


  signal(SIGALRM, mataDsreader);
  scanner=fork();


  if(scanner==0){
    system("./dsreader > cadastro.txt");
  }else{
    alarm(15);
    pause();
  }


  return 0;
}
