//program to find mean, median, mode of an array
#include<stdio.h>
void main()
{
	int i, n, j, temp, count, maxCount=0, mode=0, mode2=0, case2=0;
	float mean=0, median=0;
	
	printf("Enter the length of the array: ");
	scanf("%d", &n);
	
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the element: ");
		scanf("%d", &arr[i]);
	}
	
	//to find mean
	for(i=0;i<n;i++)
	{
		mean=mean+arr[i];
	}
	mean = ((float)mean)/n;
	printf("\nThe mean of the array is: %f", mean);
	
	//to find median
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}	
	}
	if(n%2!=0)
	{
		printf("\nThe median of the array is: %d", arr[n/2]);	
	}
	else
	{
		median=((float)(arr[n/2 - 1] + arr[n/2])) / 2;
		//printf("\n%d--%d---%f\n", arr[n/2 - 1], arr[n/2], median);
		printf("\nThe median of the array is: %f", median);	
	}
	
	//to find mode 
	for(i=0;i<n;i++) 
	{
		count = 0;
        for(j=0;j<n;j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) 
        {
        	maxCount = count;
            mode = arr[i];
        }
        if(count == maxCount)
        {
        	maxCount = count;
        	mode2 =arr[i];
        	case2=1;
        }
    }
    printf("\nThe mode of the elements of the array is: %d", mode);    
    if(case2==1)
    {
    	printf("\nThe mode of the elements of the array is: %d and %d", mode, mode2);    
    }
    
}
