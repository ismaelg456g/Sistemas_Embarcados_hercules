#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    pid_t pid_filho[2];

    pid_filho[0]=fork();

    if(pid_filho[0]==0){
        printf("oi processo filho 1 pid:%d\n", getpid());
        return 0;
    }
    pid_filho[1]=fork();

    if(pid_filho[1]==0){
        printf("oi processo filho 2 pid:%d\n", getpid());
        return 0;
    }
    pid_filho[2]=fork();

    if(pid_filho[2]==0){
        printf("oi processo filho 3 pid:%d\n", getpid());
        return 0;
    }
    printf("oi processo pai pid:%d\n", getpid());

    return 0;
}
