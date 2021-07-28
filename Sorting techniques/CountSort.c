#include<stdio.h>
#include<malloc.h>

void display(int *arr, int n)
{
    printf("The array is:\n");
    for(int i = 0; i < n; i++)
    printf("%d ==> ", arr[i]);
    printf("\n\n");
}

int maximum(int* arr, int n)
{
    int max = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

void CountSort(int* arr, int n)
{
    int max, i, j;
    max = maximum(arr, n);

    int* count = (int*)malloc((max+1) * sizeof(int));

    for(i = 0; i <= max; i++)
    count[i] = 0;
 
    for(i = 0; i < n; i++)
    {
        count[arr[i]] = count[arr[i]] + 1;
    }

    j = 0;

    for(i = 0; i <= max; i++)
    {
        while(count[i] != 0)
        {
            arr[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
    }

}

void main()
{
    int arr[20];
    int i, n;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i< n; i++)
    scanf("%d", &arr[i]);

    printf("\n\nGiven arrrrray is: ");
    for(i = 0; i < n; i++)
    printf("%d ===> ", arr[i]);

    CountSort(arr, n);

    printf("\n\nSorted array is: ");
    for(i = 0; i < n; i++)
    printf("%d ===> ", arr[i]);
    printf("\n\n");
}