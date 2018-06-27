
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
		
	float d;	
	int l;
	pid_t p=fork();
	if(p==-1)
	{
		perror("fork");
		exit(1);
	}
	else if(p==0)
	{
		printf("my id %d\n", getpid());			
		execl("expoxch.out","./expoxch.out",argv[1],argv[2],NULL);	
	}
	else
	{
		waitpid(p,0,0);
		printf("done");
	}
	return 0;	
}
