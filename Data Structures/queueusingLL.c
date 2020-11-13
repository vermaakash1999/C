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
struct Node *temp, *t;
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
		printf("QUEUE USING DYNAMIC MEMORY ALLOCATION\n");
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
// Functions to push elements into the queue.
void push()
{
	temp = (struct Node *)malloc(sizeof(struct Node));
	temp->next = NULL;
	printf("Enter data=\n");
	scanf("%d", &temp->data);

	if (top == NULL)
	{
		top = temp;
	}
	else
	{
		t = top;
		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = temp;
	}
}
// Function to pop element from top of the queue.
void pop()
{
	temp = top;
	if (temp == NULL)
	{
		printf("Queue is already empty.\n");
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
