#include<stdio.h>
void main()
{
	int i,j,k,a=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i<=4-j)
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",a);
			a++;
			printf(" ");
		}
		printf("\n");
	}
}
