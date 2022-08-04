//Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
	int i,n,f=1;
	printf("enter the no\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("%d",f);
	return 0;
}
