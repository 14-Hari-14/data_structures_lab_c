#include<stdio.h>
int binary_search(int arr[], int n, int term)
{
	int high = n-1, low = 0, i, mid;
	while(low <= high)
	{
		mid = (low + high)/2;
		if(arr[mid]==term)
		{
			printf("Element found at index: %d\n", mid);
			break;
		}
		else if(term<arr[mid])
		{
			high = mid - 1;
		}
		else if(term>arr[mid])
		{
			low = mid + 1; 
		}
	}
	return mid;
}
void main()
{
	int length, i, j, term, temp;
	printf("Enter the length of the array: ");
	scanf("%d", &length);
	int arr[length];
	for(i=0; i<length; i++)
	{
		printf("Enter element: ");
		scanf("%d", &arr[i]);
	}
	//bubble sort
	for(i=0; i<length-1; i++)
	{
		for(j=0; j<length-i-1; j++)
		{
			
			if(arr[j]>arr[j+1])
			{
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("\nSorted array\n");
	for(i=0; i<length; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\nEnter element to be searched for: ");
	scanf("%d", &term);
	int result = binary_search(arr, length, term);
}
