//program to find duplicates in an array
#include<stdio.h>
void main()
{
	int i,n,dupe,c=0,j=0;
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter the element: ");
		scanf("%d", &arr[i]);
	}
	
	
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			dupe=arr[j];
			if(arr[i]==dupe)
			{
				c+=1;
			}
			
		}
		printf("%d has %d instance in the array\n", arr[j], c);
		j+=1;
		c=0;
	}
	
}
