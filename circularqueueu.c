#include<stdio.h>
#include<stdlib.h>

int front = -1, rear = -1, len = 0;

void enq(int queue[])
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
	else if(front == (rear+1)%len)
	{	
		printf("Overflow error");
		return;
	}
	else
	{
		rear=(rear+1)%len;
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
		front = (front+1)%len;	
	}
}

void search(int queue[])
{
    int item, found = 0, i = front;
    printf("Enter element to be searched: ");
    scanf("%d", &item);
    while(i != (rear + 1) % len) // Corrected loop boundary condition
    {
        if(queue[i] == item)
        {
            printf("Element found\n");
            found++;
        }
        i = (i + 1) % len; // Corrected loop increment
    }
    if(found == 0)
    {
        printf("Element not found\n");
    }
}

void display(int queue[])
{
    int i = front;
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
        return;
    }
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % len;
    }
    printf("%d\n", queue[rear]); // Print the last element
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
				enq(queue);
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
