#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>


int main(){
  pid_t scanner;

  // scanner=fork();

  // if(scanner==0){
    system("./dsreader > cadastro.txt");
  // }else{
  //
  // }


  return 0;
}
