//dutch flag problem
#include<stdio.h>
void main()
{
	int i, n, low=0, mid=0, high=0, temp=0;
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Only input 0, 1, 2 no other digits are allowed");
	for(i=0;i<n;i++)
	{
		printf("\nEnter the element: ");
		scanf("%d", &arr[i]);
	}
	low, mid=0;
	high=n-1;
	while(mid<=high)
	{
		if(arr[mid]==0)
		{
			temp=arr[mid];
			arr[mid]=arr[low];
			arr[low]=temp;
			mid++;
			low++;
		}
		else if(arr[mid]==1)
		{
			mid++;
		}
		else if(arr[mid]==2)
		{
			temp=arr[mid];
			arr[mid]=arr[high];
			arr[high]=temp;
			high--;
				
		}		
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n", arr[i]);
	}
}
	

