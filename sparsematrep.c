#include<stdio.h>
void main()
{
	//int sparsemat[4][3]={{0,1,0},{3,0,0},{0,0,2},{1,0,0}};
	int row, col, size = 0, count = 0;

	printf("Enter the number of rows and columns for the sparse matrix respectively: ");
	scanf("%d %d", &row, &col);
	int sparsemat[row][col];


	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("Enter elements: ");
			scanf("%d", &sparsemat[i][j]);
		}
	}

	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(sparsemat[i][j]!=0)
			{
				size++;
			}
			else if(sparsemat[i][j]==0)
			{
				count++;
			}
		}
	}


	int compactmat[3][size];
	int k=0;

	for(int i=0; i<4; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(sparsemat[i][j] != 0)
			{
				compactmat[0][k] = i;
				compactmat[1][k] = j;
				compactmat[2][k] = sparsemat[i][j];
				k++;
					
			}
		}
	}


	for (int i=0; i<3; i++)
    	{
        	for (int j=0; j<size; j++)
        	{
            		printf("%d ", compactmat[i][j]);
        	}
	        printf("\n");
        }
        printf("\nThe sparsity of the matrix is the ratio of the number of zero values to non zero values");
        float result = count/size;
        printf("\nThe sparsity of the matrix is: %f", result);
}
