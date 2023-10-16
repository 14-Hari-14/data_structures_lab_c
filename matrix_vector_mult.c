#include<stdio.h>
void main()
{	
	// initializing the variables
	int m, n, i, j, dot=0, sum=0;
	
	// initializing the matrix and the vector
	printf("Enter the order of matrix: ");
	scanf("%d %d", &m, &n);
	
	int a[m][n], v[n];
	
	// adding elements to the matrix
	for(i=0; i<m; i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element: ");
			scanf("%d", &a[i][j]);
		}
	}
	
	// adding elements to the vector
	for(i=0;i<n;i++)
	{
		printf("Enter the coefficients of the vector: ");
		scanf("%d", &v[i]);
	}
	
	// printing the vector and the matrix
	printf("The matrix is \n");
	for(i=0; i<m; i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("The vector is \n");
	for(i=0;i<n;i++)
	{
		printf("%d ", v[i]);
	}
	
	// multiplying 
	printf("\n The dot product of the matrix and the vector is \n");
	for(i=0; i<m; i++)
	{
		for(j=0;j<n;j++)
		{
			dot = a[i][j]*v[j];
			sum = sum + dot;
		}
		printf("%d ", sum);
		sum=0;
		printf("\n");
	}		
}
