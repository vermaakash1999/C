#include<stdio.h>
void main()
{
	int i,j,a=0,b=0;
	for(i=1;i<=5;i++)
	{
		a=0;
		if(i%2==0)
		{
			a++;
			for(j=i;j>0;j--)
			{
				if(j%2==1)
				{
					printf("%d",b);
				}
				else
				{
					printf("%d",a);
				}
				
				
			}
		}
		else
		{
			a++;
			for(j=1;j<=i;j++)
			{
				if(j%2==0)
				{
					printf("%d",a);
				}
				else
				{
					printf("%d",b);
				}
			}
		}
		printf("\n");
	}
}
