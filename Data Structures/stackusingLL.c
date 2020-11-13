// Importing necessary libraries.

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

// Creating a structure to store data with a pointer to the next node.

struct Node
{
	int data;
	struct Node *next;
};

// Function Declarations and Global Variables.

struct Node *top = NULL;
struct Node *temp;
void push();
void pop();

// Main function to run the program.
void main()
{
	int choice;
	char flag = 'n';
	// Using do while loop to perform various operations.
	do
	{
		printf("STACK USING DYNAMIC MEMORY ALLOCATION\n");
		printf("		MENU		\n");
		printf("1.Push :\n");
		printf("2.Pop  :\n");
		printf("3.Exit .\n");
		printf("Enter your choice=\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
		{
			push();
			break;
		}
		case 2:
		{
			pop();
			break;
		}

		case 3:
		{
			flag = 'n';
			break;
		}
		default:
		{
			printf("Inalid Input\nPlease enter again\n");
		}
		}
		//	fflush(stdin);
		if (choice != 3)
		{
			printf("Do you wish to continue(y/n)=\n");

			scanf(" %c", &flag);
		}

	} while (flag == 'y');
}
// Functions to push elements into the stack.
void push()
{
	if (top == NULL)
	{
		top = (struct Node *)malloc(sizeof(struct Node));
		top->next = NULL;
		printf("Enter Data :\n");
		scanf("%d", &top->data);
	}
	else
	{
		temp = (struct Node *)malloc(sizeof(struct Node));
		temp->next = top;
		printf("Enter Data :\n");
		scanf("%d", &temp->data);
		top = temp;
	}
}

// Function to pop element from top of the stack.
void pop()
{
	temp = top;
	if (temp == NULL)
	{
		printf("Stack is already empty\n");
		return;
	}

	else
	{
		temp = temp->next;
		printf("Popped value : %d \n", top->data);
		free(top);
		top = temp;
	}
}
