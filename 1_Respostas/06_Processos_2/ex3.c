#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv){
	int i;
	pid_t pid_filho;

	for(i=1; i<argc; i++){
		pid_filho=fork();
		if(pid_filho==0){
            execlp(argv[i],argv[i], (char *) NULL);
        }else
            pid_filho=0;
	}
	return 0;
}

