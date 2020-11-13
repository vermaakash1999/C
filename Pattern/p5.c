#include<stdio.h>
void main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{
			if(j<i)
			printf(" ");
		}
		for(j=1;j<=6-i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
