#include<stdio.h>
#define MAX 100
int stack[MAX];
int top=-1;
int isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isFull()
{
	if(top==MAX-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push()
{
	int data;
	if(!isFull())
	{
		top=top+1;
		printf("Enter data in stack =\n");
		scanf("%d",&data);
		stack[top]=data;
		
	}
	else
	{
		printf("Stack is already full.\n");
	}
}
void pop()
{
	int data;
	if(!isEmpty())
	{
		data=stack[top];
		printf("Popped value = %d \n",data);
		top=top-1;
	}
	else
	{
		printf("Stack is already empty.\n");
	}
}
void peek()
{
	if(!isEmpty())
	{
	int data;
	data=stack[top];
	printf("Top element in stack = %d \n",data);
	}
	else
	{
		printf("Stack is already empty,No elements present.\n");
	}
}
void main()
{
	int choice;
	char flag='n';
	
	do
	{
	printf("STACK USING ARRAY\n");
	printf("		MENU		\n");
	printf("1.Push :\n");
	printf("2.Pop  :\n");
	printf("3.Peek top element :\n");
	printf("4.Exit .\n");
	printf("Enter your choice=\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :{
			push();
			break;
			
		}
		case 2 :{
			pop();
			break;
			
		}
		case 3 :{
			peek();
			break;
		}
	
		case 4 :{
			flag='n';
			break;
		}
		default :{
			printf("Inalid Input\nPlease enter again\n");
		}
	}
//	fflush(stdin);
	if(choice!=4)
	{
	printf("Do you wish to continue(y/n)=\n");
	
	scanf(" %c",&flag);
	}
	
	}while(flag=='y');
	
	
}
