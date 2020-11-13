#include<stdio.h>
int partition(int a[],int p,int r)
{
	int x,i,j,temp,temp1;
	x=a[r];
	i=p-1;
	for(j=p;j<r;j++)
	{
		if(a[j]<=x)
		{
			i=i+1;
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	temp1=a[r];
	a[r]=a[i+1];
	a[i+1]=temp1;
	return i+1;
}

void quicksort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}
void main()
{
	int n,i,p,r;
	printf("QUICK-SORT\n");
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
	quicksort(a,p,r);
	printf("Sorted array=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
