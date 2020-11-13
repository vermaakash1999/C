#include<stdio.h>
#include<stdlib.h>
void insertionsort(int *,int);
void main()
{
	int n,i;
	printf("INSERTION-SORT\n");
	printf("Enter size of array=");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in array =\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertionsort(a,n);
	printf("Sorted array=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void insertionsort(int a[],int n)
{
	int j,key,i;
	for(j=1;j<=n;j++)
	{
		key=a[j];
		i=j-1;
		while(i>0 && a[i]>key)
		{
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=key;
	}
}
