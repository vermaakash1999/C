#include<stdio.h>
#include<math.h>
#include "merge.c"
void mergesort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=floor((p+r)/2);
		mergesort(a,p,q);
		mergesort(a,q+1,r);
		merge(a,p,q,r);
	}
}
void main()
{
	int n,i,p,r;
	printf("MERGE-SORT\n");
	printf("Enter size of array=");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in array =\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=0;
	r=n-1;
	mergesort(a,p,r);
	printf("Sorted array=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
