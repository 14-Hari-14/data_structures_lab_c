#include<stdio.h>
#include<stdlib.h>

void merge(int arr[], int low, int mid, int high)
{
	int i = 0, j = 0, k = 0;
	int n1 = mid - low + 1;
	int n2 = high - mid;
	
	int left[n1], right[n2];
	
	for(i=0; i<n1; i++)
	{
		left[i] = arr[low+i];
	}
	for(j = 0; j<n2; j++)
	{
		right[j] = arr[mid+1+j];
	}
	
	i = 0; j = 0; k = low;
	
	while(i<n1 && j<n2)
	{
		if(left[i]<right[j])
		{
			arr[k] = left[i];
			i++;
			k++;
		}
		else
		{
			arr[k] = right[j];
			j++;
			k++;
		}
	}
	while(i<n1)
	{
		arr[k] = left[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k] = right[j];
		j++;
		k++;
	}

}

void mergeSort(int arr[], int low, int high)
{
	if(low<high)
	{
		int mid = (low+high)/2;
		mergeSort(arr, low, mid);
		mergeSort(arr, mid+1, high);
		merge(arr, low, mid, high);
	}
}

int main()
{
	int low = 0, i = 0, len = 0, j = 0, high = 0;
	printf("Enter the length of the array: ");
	scanf("%d", &len);
	
	int arr[len];
	
	while(i < len)
	{
		printf("Enter element: ");
		scanf("%d", &arr[i]);
		i++;
	}
	
	printf("\nUnsorted array\n");
	for(int h = 0; h < len; h++)
	{
		printf("%d ", arr[h]);
	}
	high = len - 1;
	
	mergeSort(arr, low, high);

	printf("\nSorted array\n");
	for(int h = 0; h < len; h++)
	{
		printf("%d ", arr[h]);
	}

	return 0;
}





































/*
void merge(int array[], int low, int mid, int high)
{
    int i, j, k;

    // Length of the temporary arrays created
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Creating temp arrays
    int left[n1], right[n2];

    // Copying the left array to temp array
    for (i = 0; i < n1; i++)
    {
        left[i] = array[low + i];
    }

    // Copying the right array to temp array
    for (j = 0; j < n2; j++)
    {
        right[j] = array[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = low;

    while (i < n1 && j < n2)
    {
        if (left[i] < right[j])
        {
            array[k] = left[i];
            i++;
        }
        else
        {
            array[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left[] and right[], if any
    while (i < n1)
    {
        array[k] = left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        array[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(array, low, mid);
        mergeSort(array, mid + 1, high);
        merge(array, low, mid, high);
    }
}

int main()
{
    int len = 0, low = 0, i = 0, j = 0;
    printf("\nEnter length of array: ");
    scanf("%d", &len);
    int array[len];

    while (i < len)
    {
        printf("Enter elements for array: ");
        scanf("%d", &array[i]);
        i++;
    }

    i = 0;

    printf("\nUnsorted array\n");
    while (i < len)
    {
        printf("%d ", array[i]);
        i++;
    }

    int high = len - 1;
    mergeSort(array, low, high);

    j = 0;
    printf("\nSorted array\n");
    while (j < len)
    {
        printf("%d ", array[j]);
        j++;
    }

    return 0;
}
*/
