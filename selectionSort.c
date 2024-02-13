#include<stdio.h>

void selectionSort(int a[], int size)
{
	int i=0, j=0, min=0, temp=0;
	
	printf("\nUnsorted list\n");
	for(i=0; i<size; i++)
	{
		printf("%d ", a[i]);
	}
	
	
	for(i=0; i<size-1; i++)
	{
		min = i;
		for(j=i+1; j<size; j++)
		{
			if(a[j]<a[min])
			{
				min = j;
			}
		}
		if(i != min)
		{
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
	}
	
	printf("\nSorted list\n");
	for(i=0; i<size; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	int size;
	printf("Enter size of the array: ");
	scanf("%d", &size);
	int a[size];
	for(int i = 0; i<size; i++)
	{
		printf("Enter element: ");
		scanf("%d", &a[i]);
	}
	selectionSort(a, size);
	return 0;
}
