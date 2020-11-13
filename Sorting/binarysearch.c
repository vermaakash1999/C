#include<stdio.h>
#include<stdlib.h>

int binarySearch(int list[],int end,int target,int* locn)
{
	int first,mid,last;
	first=0;
	last=end;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(target>list[mid])
			first=mid+1;
		else if(target<list[mid])
			last=mid-1;
		else
			first=last+1;
	}
	*locn=mid;
	return (target==list[mid]);
}
void main()
{
	int n,i,element;
	int* p;
	int x;
	p=&element;
	printf("Binary-Search\n");
	printf("Enter size of array=");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in array =\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element you want to search :\n");
	scanf("%d",p);
	x=binarySearch(a,n-1,element,p);
	if(x==1)
		printf("Element is present in array\n");
	else
		printf("Element is not present in array\n");
}
