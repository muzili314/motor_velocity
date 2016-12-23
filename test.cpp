#include <stdio.h>
#include <math.h>

#define SIMPLES 50
#define PI 3.1415926
#define LENGTH 495
#define FRENCE 1000000

void main()
{
	float x[SIMPLES+1];
	float f[SIMPLES+1];
    int  load[SIMPLES-1];
	float sum = 0;
	int time;
	float k;
	printf("please input time :");
	scanf("%d",&time);
	for(int i = 0;i < SIMPLES+1;i++)
	{
		x[i] = PI/SIMPLES*i;
	}

	for(int i = 0;i < SIMPLES+1;i++)
	{
		sum = sum + sinf(x[i]);
	}
	k = LENGTH/0.02225*SIMPLES/time/sum;

	for(int i = 0;i < SIMPLES+1;i++)
	{
		f[i] = k*sinf(x[i]);
	}

	for(int i = 0;i < SIMPLES-1;i++)
	{
		load[i] = FRENCE/f[i+1];
	}
	printf("sum = %f\tk = %f\n",sum,k);

	for(int i = 0;i < SIMPLES+1;i++)
	{
		printf("f[%d] = %f\t",i,f[i]);
	}
	printf("\n");

	for(int i = 0;i < SIMPLES-1;i++)
	{
		printf("load[%d] = %d\t",i,load[i]);
	}
	printf("\n");


}