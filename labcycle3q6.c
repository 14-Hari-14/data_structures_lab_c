//program to create the largest number using given numbers
#include<stdio.h>
void main()
{	
	int i, n, j, temp=0;
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the element: ");
		scanf("%d", &arr[i]);
	}
	//using bubble sort to sort it in reverse
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-1;i++)
		{
			if(arr[i]<arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}	
	}
	printf("The largest integer that could be created using the given numbers is: ");
	for(i=0;i<n;i++)
	{
		printf("%d", arr[i]);
	}
	
}
