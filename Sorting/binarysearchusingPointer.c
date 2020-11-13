#include<stdio.h>
#include<stdlib.h>

int binarySearchPtr(int list[],int* endPtr,int target,int** locnPtr)
{
	int* firstPtr;
	int* midPtr;
	int* lastPtr;
	firstPtr=list;
	lastPtr=endPtr;
	while(firstPtr<=lastPtr)
	{
		midPtr=firstPtr+(lastPtr-firstPtr)/2;
		if(target>*midPtr)
			firstPtr=midPtr+1;
		else if(target<*midPtr)
			lastPtr=midPtr-1;
		else
			firstPtr=lastPtr+1;
	}
	*locnPtr=midPtr;
	return (target==*midPtr);
}
void main()
{
	int n,i,element;
	int* p;
	int* endPtr;
	int x;
	p=&element;
	int** tarPtr;
	tarPtr=&p;
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
	scanf("%d",*tarPtr);
	endPtr=&a[n-1];
	x=binarySearchPtr(a,endPtr,element,tarPtr);
	if(x==1)
		printf("Element is present in array\n");
	else
		printf("Element is not present in array\n");
}
