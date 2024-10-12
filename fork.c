#include<unistd.h>
#include<stdio.h>

int main(){
	int pid;
        pid = fork();
	if(pid > 0){
		printf("Hello World\n");
	}else if(pid == 0)
		printf("Hello World Child\n");
	else
		printf("FAILED!!\n");
	return 0;
}
