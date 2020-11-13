#include<stdio.h>
#include"max_heapify.c"

void heap_sort(int a[],int len)
{
	
	int temp,n,i;
	
	for(i=((len/2)-1);i>=0;i--)
	{
		max_heapify(a,i,len);
	}
	for(i=len-1;i>=0;i--)
	{
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;

		max_heapify(a,0,i);
	}
	
}
void main()
{
	int n,i;
	printf("HEAP-SORT\n");
	printf("Enter size of array=");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in array =\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	heap_sort(a,n);
	printf("Sorted array=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
