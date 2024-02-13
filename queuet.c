#include<stdio.h>
#include<stdlib.h>

int front = -1, rear = -1, len = 0;

void enq(int queue[], int len)
{
	int item;
	printf("Enter element to enqueue: ");
	scanf("%d", &item);
	if(front == -1 && rear == -1)
	{
		front++;
		rear++;
		queue[rear] = item;
	}
	else if(rear == len - 1)
	{
		printf("Overflow error");
	}
	else
	{
		rear++;
		queue[rear] = item;
	}
	
	
}

void deq(int queue[])
{
	if(front == -1 && rear == -1)
	{
		printf("List is empty");
	}
	else if(front == rear)
	{
		printf("%d is dequeued", queue[front]);
		queue[front] = 0;
		front = -1, rear = -1;
	}
	else
	{
		printf("%d is dequeued", queue[front]);
		queue[front] = 0;
		front++;	
	}
}

void search(int queue[])
{
	int item, found = 0, i = 0;
	printf("Enter element to be searched: ");
	scanf("%d", &item);
	for(i = front; i<=rear; i++)
	{
		if(queue[i] == item)
		{
			printf("Element found");
			found++;
		}
	}
	if(found == 0)
	{
		printf("Element not found");
	}
	
}
void display(int queue[])
{
	int i = 0;
	for(i = front; i<=rear; i++)
	{
		printf("%d ", queue[i]);
	}
}
int main()
{
	int ch, loop = 1;
	printf("Enter length of the queue: ");
	scanf("%d", &len);
	int queue[len];
	
	while(loop == 1)
	{
		printf("\n1.) Enqueue\n2.) Dequeue\n3.) Search\n4.) Display\n5.) Quit\n");
		printf("Enter choice: ");
		scanf("%d", &ch);
		
		switch(ch)
		{
			case 1:
				enq(queue, len);
				break;
			case 2:
				deq(queue);
				break;
			case 3:
				search(queue);
				break;
			case 4:
				display(queue);
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("Invalid option chosen");
		}
	}
	return 0;
}
