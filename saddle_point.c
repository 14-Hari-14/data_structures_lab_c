#include<stdio.h>
//saddle point is the smallest in the row and the largest in the column
void main()
{
	// initializing the variables
	int m, n, i, j, small, large;
	// initializing the matrix 
	printf("Enter the order of matrix: ");
	scanf("%d %d", &m, &n);
	
	int a[m][n], small_a[n], large_a[m];
	
	// adding elements to the matrix
	for(i=0; i<m; i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element: ");
			scanf("%d", &a[i][j]);
		}
	}
	small = a[0][0], large=a[0][0];
	printf("The matrix is \n");
	for(i=0; i<m; i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	//finding the saddle point
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j]<small)
			{
				small = a[i][j];
			}
		}
		printf("The smallest element of row %d is %d \n", i+1, small);
		small_a[i]=small;
		small=100000000;
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if(large<a[j][i])
			{
				large=a[j][i];			
			}
		}
		printf("The largest element of column %d is %d \n", i+1, large);
		large_a[i]=large;
		large=0;
	}
	printf("\nsmall");
	for(i=0; i<n; i++)
	{
		printf("%d ", small_a[i]);
	}
	
	printf("\nlarge");
	for(i=0; i<m; i++)
	{
		printf("%d ", large_a[i]);
	}
	
	for(i=0;i<m && i<n;i++)
	{
		//printf("\n%d--%d\n", small_a[i], large_a[i]);
		for(j=0; j<m && j<n;j++)
		{
			if(small_a[i]==large_a[j])
			{
				printf("The saddle point of the matrix is %d", small_a[i]);			
			}
		}
	}
}
