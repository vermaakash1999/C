#include<stdio.h>
void main()
{
	int i,j,n,space;
	scanf("%d",&n);
	space=n-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		space--;
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	space=1;
	for(i=1;i<n;i++)
	{
		for(j=1;j<=space;j++)
		{
			printf(" ");
		}
		space++;
		for(j=1;j<=2*(n-i)-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
