#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
}
*head = NULL, *top = NULL, *newNode = NULL, *current = NULL;
int Push()
{
	newNode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data to be added: ");
	scanf("%d", &newNode->data);
	if(head == NULL)
	{
		head = newNode;	
		top = head;
	}
	else
	{
		newNode->next = head;
		head = newNode;
		top = newNode;
	}
}

int Pop()
{
	if(head == NULL)
	{
		printf("Underflow error");
	}
	
	else if(head->next == NULL)
	{
		printf("Last element to be popped");
		free(head);
	}
	else
	{
		top = head->next;
		printf("Element popped %d", head->data);	
		free(head);
		head  = top;
	}
}

void Peek()
{
	printf("Element at the top of the stack is, %d", top->data);
}

void Search()
{
	int key, ind=0, ct=0;
	current = head;
	printf("Enter element to be searched for: ");
	scanf("%d", &key);
	while(current->next != NULL)
	{
		if(current->data == key)
		{
			printf("\nElement found at index, %d\n", ind);
			ct = 1;
			break;
		}
		current = current->next;
		ind++;
	}
	if(ct==0)
	{
		printf("Element not found in stack");
	}
}
void Display()
{
	current = head;
	while(current != NULL)
	{
		if(current->next != NULL)
		{
			printf("%d-->", current->data);		
		}
		else
		{
			printf("%d", current->data);
		}
		current = current->next;
	}
}

int main()
{
	printf("Stack using Linked List");
	int loop = 1, ch = 0, top = -1;
	while(loop == 1)
	{
		printf("\n1.) PUSH\n2.) POP\n3.) PEEK\n4.) SEARCH\n5.) DISPLAY\n6.) QUIT\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				top = Push();
				break;
			case 2:
				top = Pop();
				break;
			case 3:
				Peek();
				break;
			case 4:
				Search();
				break;
			case 5:
				Display();
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("Invalid option chosen");
		}
	}
	
	return 0;
}
