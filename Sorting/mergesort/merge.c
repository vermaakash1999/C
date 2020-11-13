#include<stdio.h>
#include<stdlib.h>

// ----------------MERGE ALGO-----------------
void merge(int a[],int p,int q,int r)
{
	int n1,n2,i,j,k;
	n1=q-p+1;
	n2=r-q;
	int L[n1+1],R[n2+1];
	for(i=0;i<n1;i++)
	{
		L[i]=a[p+i];
	}
	for(j=0;j<n2;j++)
	{
		R[j]=a[q+j+1];
	}
	L[n1]=INT_MAX;
	R[n2]=INT_MAX;
	i=0;
	j=0;
	for(k=p;k<=r;k++)
	{
		if(L[i]<R[j])
		{
			a[k]=L[i];
			i=i+1;
		}
		else
		{
			a[k]=R[j];
			j=j+1;
		}
	}
}
