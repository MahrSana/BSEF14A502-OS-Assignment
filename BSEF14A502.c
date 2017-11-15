#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	pid_t pid[4];
	int arr[100], arr2[4]={0,0,0,0};
	int st;
	int total=0, i;
	for(int n=0; n<100; n++)
	{ arr[n]=1;}

	for(i=0;i<4;i++)
	{
		pid[i]=fork();
		if(pid[i]<0)
		{
			exit(EXIT_FAILURE);}}
	else if(pid[0]==0)
	{	
		for(int j=0;j<25;j++)
	{arr2[0]=arr2[0]+arr[i];}}
	else if(pid[1]==0)
	{	
		for(int j=25;j<50;j++)
	{arr2[1]=arr2[1]+arr[j];}}
	else if(pid[2]==0)
	{	
		for(int j=50;j<75;j++)
	{arr2[2]=arr2[2]+arr[j];}}

	else if(pid[3]==0)
	{	
		for(int j=75;j<100;j++)
	{arr2[3]=arr2[3]+arr[j];}}
	else{printf("Parent\n");}

	for(int i=0;i<4;i++)
	{	pid[i]=wait(&st);}

	total=arr2[0]+arr2[1]+arr2[2]+arr2[3];
	printf("total %d\n",total);
	return 0;
	}