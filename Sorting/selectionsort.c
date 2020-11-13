#include<stdio.h>

void selectionSort(int list[],int last)
{
	int smallest,tempData,current,walk;
	for(current = 0;current<last;current++)
	{
		smallest=current;
		for(walk=current+1;walk<=last;walk++)
		{
			if(list[walk]<list[smallest])
			{
				smallest=walk;
			}
		}
		tempData =list[current];
		list[current]=list[smallest];
		list[smallest]=tempData;
	}
}
void main()
{
	int n,i;
	printf("Selection-SORT\n");
	printf("Enter size of array=");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in array =\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selectionSort(a,n);
	printf("Sorted array=\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
