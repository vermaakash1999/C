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
			if(j%2==0)
			{
				printf(" ");
			}
			else
			{
			    printf("%d",j);
		    }
		}
		for(j=5;j>i;j--)
		{
			if((j-i)%2==0)
			{
				printf(" ");
			}
			else
			{
			    printf("%d",j-i);
		    }
		}
		printf("\n");
	}
}
