#include<stdio.h>

void max_heapify(int a[],int i,int n)
{
	
	int l,r,largest,temp;
	l=2*i+1;
	r=2*i+2;
	largest=i;
	if(l<n && a[l]>a[largest])
	{
		largest=l;
	}
	if(r<n && a[r]>a[largest])
	{
		largest=r;
	}
	if(largest != i)
	{
		temp=a[largest];
		a[largest]=a[i];
		a[i]=temp;
		max_heapify(a,largest,n);
	}
}
