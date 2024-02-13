#include <stdio.h>

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                // Swap arr[i] and arr[j] without using a separate swap function
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        // Swap arr[i+1] and arr[high] without using a separate swap function
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pi = i + 1;

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quickSort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

/*
#include<stdio.h>
void insertionSort(int arr[], int size)
{
	int i, j, key;
	for(i=1;i<size;i++)
	{
		key = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1]=key;
	}
	
	printf("\nSorted list\n");
	for(i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int size;
	printf("Enter size of the array: ");
	scanf("%d", &size);
	int a[size];
	for(int i = 0; i<size; i++)
	{
		printf("Enter element: ");
		scanf("%d", &a[i]);
	}
	insertionSort(a, size);
	return 0;
}
*/
