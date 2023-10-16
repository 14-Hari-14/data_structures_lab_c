#include<stdio.h>
void main()
{
	//creating the array
	int i,n,k,j,k_small,x;
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the element: ");
		scanf("%d", &arr[i]);
	}
	//accepting the kth smallest element 
	printf("Enter the kth smallest element to be found: ");
	scanf("%d", &k);
	k_small=arr[0];
	for(x=0;x<k;x++)
	{
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(arr[j]<arr[i])
				{
					k_small=arr[i];
					arr[i]=arr[j];
					arr[j]=k_small;
				}
			}
		}
	}
	printf("kth smallest element is %d", arr[k-1]);
}
	
