//Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the no\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	 sum = (2*i-1) + sum;
	}
	printf("%d",sum);
	return 0;
}
