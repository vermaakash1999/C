// Importing necessary libraries.
#include <stdio.h>
#include <malloc.h>
// Creating a structure to store data with a pointer to the next node.

struct Node
{
	int data;
	struct Node *link;
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
		printf("	SINGLE CIRCULAR LINKED LIST	\n");
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
/* Function to add a node to an existing or to create a single circular linked list if not created.*/
void add()
{
	/* A pointer to newnode and a traversing pointer.*/
	struct Node *newnode;
	struct Node *t;

	newnode = (struct Node *)malloc(sizeof(struct Node));

	printf("Enter data=\n");
	scanf("%d", &newnode->data);
	/* If no linked list present then start=NULL hence creating a linkedlist with start=newnode. */
	if (start == NULL)
	{
		start = newnode;
		newnode->link = start;
	}
	/* If linkedlist present then traversing to end to add a new node. */
	else
	{
		t = start;
		while (t->link != start)
		{
			t = t->link;
		}
		t->link = newnode;
		newnode->link = start;
	}
}
/* Function to display all elements present in single circular linked list. */

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
		do
		{
			printf("%d\n", t->data);
			t = t->link;
		} while (t != start);
	}
}
/* Function to add a node at the beginning of the single circular linked list. */

void addBeg()
{
	// Creating a new node.
	struct Node *newnode;
	struct Node *t;
	newnode = malloc(sizeof(struct Node));
	printf("Enter data at the beggining of the node=\n");
	scanf("%d", &newnode->data);
	/* If no linked list present then the newnode will be the first node. */
	if (start == NULL)
	{
		start = newnode;
		newnode->link = start;
	}
	/* If linked list present then newnode's next should point to start and then start should be changed to newnode.*/
	else
	{
		t = start;
		while (t->link != start)
		{
			t = t->link;
		}
		newnode->link = start;
		start = newnode;
		t->link = start; //Pointing end element to the new start.
	}
}

// Function to count the number of elements present in the single circular linked list.

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
		while (1)
		{

			if (temp->link == start)
			{
				count++;
				break; //breaking the loop on last element.
			}
			temp = temp->link;
			count++;
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
		do
		{
			pos++;
			if (e->data == num)
			{
				found = 'y';
				break;
			}
			e = e->link;
		} while (e != start);

		if (found == 'y')
		{
			printf("Element is found at %d\n", pos);
		}
		else
		{
			printf("Element not found.\n");
		}
	}
}

// Function to delete a node of our choice.
void del()
{
	
	struct Node *t, *temp1, *temp2;
	int num, found = 0;
	if (start == NULL)
	{
		printf("Linkedlist is empty.\n");
		return;
	}
	else
	{
		
		temp1 = start;
		printf("Enter number you want to delete=\n");
		scanf("%d", &num);
		// if there is only one node,which is start(head).
		if (start->link == start && start->data == num)
		{
			found=1;
			start = NULL;
			free(temp1);
			printf("Element deleted succesfully.\n");
			return;
		}
		//if there is more than one node and data is found at head(first node).
		if (temp1->data == num)
		{
			found=1;
			temp2 = start->link;
			while (temp2->link != start)
			{
				temp2 = temp2->link;
			}
			temp2->link = temp1->link;
			start = temp1->link;
			free(temp1);
			printf("Element deleted succesfully.\n");
		}
		else
		{
			//if there is more than one node and data is found in between except head.
			t = temp1;
			temp1 = temp1->link;

			while (temp1 != start)
			{
				if (temp1->data == num)
				{
					found=1;
					t->link = temp1->link;
					free(temp1);
					printf("Element deleted succesfully.\n");
					break;
				}
				t = temp1;
				temp1 = temp1->link;
			}
		}
	}
	if (found == 0)
	{
		printf("Element not in list already.\n");
	}
}
