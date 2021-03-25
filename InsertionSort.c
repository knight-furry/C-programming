#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
void main()
{
    int a[100],i,n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the element in array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nThe given array is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\nThe sorted array is:\n");
	
	insertionSort(a, n);
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
 
}
