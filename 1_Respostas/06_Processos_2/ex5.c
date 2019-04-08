#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void Incrementa_Variavel_Global(pid_t id_atual);

int v_global = 0;

int main(){
    pid_t pid_child;
    int i;

    for(i=0; i<3; i++){
        pid_child = fork();
        if(pid_child==0){
            Incrementa_Variavel_Global(getpid());
            i=3;
        }else{
            Incrementa_Variavel_Global(getpid());
            pid_child=0;
        }
    }

    return 0;
}

void Incrementa_Variavel_Global(pid_t id_atual)
{
	v_global++;
	printf("ID do processo que executou esta funcao = %d\n", id_atual);
	printf("v_global = %d\n", v_global);
}
