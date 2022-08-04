//Write a program to calculate LCM of two numbers
#include <stdio.h>
int main() {
	int x, y, l;
	printf("Enter two positive integers: \n");
	scanf("%d %d", &x, &y);
	l = (x > y) ? x : y;

	while (1) 
	{
		if (l % x == 0 && l % y == 0)
	    {
			printf("The LCM obtained from %d and %d is %d.", x, y, l);
			break;
		}
		l++;
	}

	return 0;
}
