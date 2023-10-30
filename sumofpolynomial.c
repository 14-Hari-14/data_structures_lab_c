#include<stdio.h>
void sumofpoly(int arr1[], int arr2[], int arr3[], int o1, int o2)
{

	for(int i=0; i<o1; i++)
	{
		//printf("%d\n", (o1+o2)/2);
		arr3[i]=arr1[i]+arr2[i];
	}
	for(int i=0; i<o1; i++)
	{
		printf("%d*x^%d + ", arr3[i], i);
	}


}

void main()
{
	int o1, i;
	printf("Enter the highest order of the 1st and 2nd polynomial: ");
	scanf("%d", &o1);
	int arr1[o1], arr2[o1], arr3[o1];
	
	for(i=0;i<o1;i++)
	{
		printf("Enter the element for the first array: ");
		scanf("%d", &arr1[i]);
	}
	for(i=0; i<o1; i++)
	{
		printf("Enter the element for the second array: ");
		scanf("%d", &arr2[i]);
	}
	for(int i=0; i<o1; i++)
	{
		printf("%d*x^%d + ", arr1[i], i);
	}
	printf("\n");
	for(int i=0; i<o1; i++)
	{
		printf("%d*x^%d + ", arr2[i], i);
	}
	printf("\n");
	sumofpoly(arr1, arr2, arr3, o1, o2);
	
}


