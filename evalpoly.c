#include<stdio.h>
#include<math.h>
int evalpoly(int arr1[], int o1, int x)
{
	int power = 0, sum=0;
	for(int i=0; i<o1;i++)
	{
		power = pow(x, i);
		sum=sum+arr1[i]*power;
	}
	return sum;
}
void main()
{
	int o1, i, x;
	printf("Enter the highest order of the polynomial: ");
	scanf("%d", &o1);
	int arr1[o1];
	for(int i=0;i<o1;i++)
	{
		printf("Enter the element: ");
		scanf("%d", &arr1[i]);
	}
	printf("Enter the value of x you want the polynomial to be evaluated for: ");
	scanf("%d", &x);
	int result = evalpoly(arr1, o1, x);
	printf("the answer is: %d", result);
}
