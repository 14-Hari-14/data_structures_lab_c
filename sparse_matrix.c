#include<stdio.h>
void main()
{
	// initializing the variables
	int m, n, i, j, count=0;
	
	// initializing the matrix 
	printf("Enter the order of matrix: ");
	scanf("%d %d", &m, &n);
	
	int a[m][n];
	
	// adding elements to the matrix
	for(i=0; i<m; i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element: ");
			scanf("%d", &a[i][j]);
		}
	}

	printf("The matrix is \n");
	for(i=0; i<m; i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	// printing the index of non zero elements and counting them
	for(i=0; i<m; i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j] != 0)
			{
				printf("%d is a non 0 element and has the index of %d, %d\n", a[i][j], i+1, j+1);			
				count = count + 1;
			}
		}
	}
	printf("\nThe total count of non 0 elements in the sparse matrix is %d", count);
	
	
}
