//Write a program to count digits in a given number
#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter the no\n");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		count=count+1;
	}
	printf("%d",count);
	return 1;
}
