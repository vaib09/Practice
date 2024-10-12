#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>

int main(){
	
	int pid = fork();//create the process 
	
	if(pid < 0){
		printf("fork failed");
	}else if(pid == 0){
		printf("Child process is created successfully! \n");
		printf("CHILD_PID = %d, parent_PID = %d\n", getpid(), getppid());
	}	

	return 0;
}

