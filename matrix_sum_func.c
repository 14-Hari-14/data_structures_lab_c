#include<stdio.h>
int n;
void columnsum(int m, int a[][n])
{
	int sum=0, i, j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			sum=sum+a[j][i];
		}
		printf("The sum of the column %d is %d \n", i+1, sum);
		sum=0;	
	}
}

void rowsum(int m, int a[][n])
{
	int sum=0, i, j;
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			sum=sum+a[i][j];
		}
		printf("The sum of the row %d is %d \n", i+1, sum);
		sum=0;	
	}
}

void main()
{
	// initializing the variables
	int m, i, j, ch=0;
	
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
	
	// taking user input 
	printf("Enter \n1.)Rowsum \n2.)ColumnSum\nEnter your choice: ");
	scanf("%d", &ch);
	
	// calling functions
	if(ch==1)
	{
		rowsum(m, a);
	}
	if(ch==2)
	{
		columnsum(m, a);
	}
}


