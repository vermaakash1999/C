// Importing necessary libraries.

#include <stdio.h>
#include <malloc.h>

// Creating a structure to store data with a pointer to the next node.

struct Node
{
	int data;
	struct Node *next;
};

// Function Declarations and Global Variables.

struct Node *start = NULL;
void add();
void display();
void addBeg();
void countAll();
void search();
void del();

// Main function to run the program.

void main()
{
	int choice;
	char flag = 'n';
	// Using do while loop to perform various operations.
	do
	{
		printf("	SINGLE LINEAR LINKED LIST	\n");
		printf("		MENU		\n");
		printf("1.Add a node to the list:\n");
		printf("2.Display all members of the list:\n");
		printf("3.Add at the beginning of list:\n");
		printf("4.Count all elements present in the list:\n");
		printf("5.Search any element in the list:\n");
		printf("6.Delete any element of the list:\n");
		printf("7.Exit.\n");
		printf("Enter your choice=\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
		{
			add();
			break;
		}
		case 2:
		{
			display();
			break;
		}
		case 3:
		{
			addBeg();
			break;
		}
		case 4:
		{
			countAll();
			break;
		}
		case 5:
		{
			search();
			break;
		}
		case 6:
		{
			del();
			break;
		}
		case 7:
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
		if (choice != 7)
		{
			printf("Do you wish to continue(y/n)=\n");

			scanf(" %c", &flag);
		}

	} while (flag == 'y');
}

/* Function to add a node to an existing or to create a single linear linked list if not created.*/

void add()
{
	/* A pointer to newnode and a traversing pointer.*/
	struct Node *newnode;
	struct Node *t;

	newnode = (struct Node *)malloc(sizeof(struct Node));
	newnode->next = NULL;
	printf("Enter data=\n");
	scanf("%d", &newnode->data);
	/* If no linked list present then start=NULL hence creating a linkedlist with start=newnode. */
	if (start == NULL)
	{
		start = newnode;
	}
	/* If linkedlist present then traversing to end to add a new node. */
	else
	{
		t = start;
		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = newnode;
	}
}

/* Function to display all elements present in single linear linked list. */

void display()
{
	struct Node *t;
	t = start;
	if (start == NULL)
	{
		printf("Linkedlist is empty.\n");
	}
	else
	{
		printf("All elements of the list are :\n");
		while (t != NULL)
		{
			printf("%d\n", t->data);
			t = t->next;
		}
	}
}

/* Function to add a node at the beginning of the single linear linked list. */

void addBeg()
{
	// Creating a new node.
	struct Node *newnode;
	newnode = (struct Node *)malloc(sizeof(struct Node));
	printf("Enter data at the beggining of the node=\n");
	scanf("%d", &newnode->data);
	/* If no linked list present then the newnode will be the first node. */
	if (start == NULL)
	{
		start = newnode;
		newnode->next = NULL;
	}
	/* If linked list present then newnode's next should point to start and then start should be changed to newnode.*/
	else
	{
		newnode->next = start;
		start = newnode;
	}
}

// Function to count the number of elements present in the single linear linked list.

void countAll()
{
	int count = 0;
	struct Node *temp = start;
	// Checking if list is present or not.
	if (temp == NULL)
	{
		printf("No elements present , list is empty.\n");
	}
	// Traversing through the list and incrementing the count.
	else
	{
		while (temp != NULL)
		{
			count++;
			temp = temp->next;
		}
		printf("No. of elements in list=	%d\n", count);
	}
}
// Function to search any element in the linked list.
void search()
{
	int num, pos = 0;
	struct Node *e;
	char found = 'n';
	if (start == NULL)
	{
		printf("Linkedlist is empty.\n");
	}
	else
	{
		printf("Enter number you want to search=\n");
		scanf("%d", &num);
		e = start;
		/* Traversing and incrementing the position untill we find the data and break.*/
		while (e != NULL)
		{
			pos++;
			if (e->data == num)
			{
				found = 'y';
				break;
			}
			e = e->next;
		}
		if (found == 'y')
		{
			printf("Element is found at %d\n", pos);
		}
		else
		{
			printf("Element not found\n");
		}
	}
}
// Function to delete a node of our choice.
void del()
{
	if (start == NULL)
	{
		printf("Linkedlist is empty.\n");
		return;
	}
	struct Node *t, *temp;
	int num, found = 0;

	printf("Enter number you want to delete=\n");
	scanf("%d", &num);
	// traversing untill we find the data we are looking for.
	t = start;
	while (t != NULL)
	{
		if (t->data == num)
		{
			found = 1;
			if (t == start)
			{
				start = start->next;
			}
			else
			{
				temp->next = t->next;
			}
			free(t);//deleting element.
			printf("Element deleted succesfully.\n");
			break;
		}
		else
		{
			temp = t;
			t = t->next;
		}
	}
	if (found == 0)
	{
		printf("Element not in list already.\n");
	}
}
