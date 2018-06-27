
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char* argv[])
{
	float x;
	int y;
	sscanf(argv[1],"%f",&x);
	printf("x=%f\n",x);
	int i;
	int j;
	float f;	
	y=atoi(argv[2]);
	printf("y=%d\n",y);
	float sum=0;
	for(i=0;i<y;i++)
	{
		if(i==1)
			f=1;
		else
		{
			f*=f;
		}
		for(j=1;j<i;j++)
		{
			f*=f;
			sum+=f/((float)(i+1));
		}
	}
	printf("(child pid=%d) for %d no of terms, sum=%f\n",getpid(),y,sum);
}
