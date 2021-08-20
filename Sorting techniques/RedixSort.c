#include<stdio.h>
 
int getMax(int arr[], int n) 
{
    int mx = arr[0];
    int i;
    for (i = 1; i < n; i++)
    if (arr[i] > mx)
    mx = arr[i];
    
    return mx;
}
 
void countSort(int arr[], int n, int exp) 
{
    int output[n]; 
    int i, count[10] = { 0 };
 
    for (i = 0; i < n; i++)
    count[(arr[i] / exp) % 10]++;
 
    for (i = 1; i < 10; i++)
    count[i] += count[i - 1];
 
    for (i = n - 1; i >= 0; i--) 
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
 
    for (i = 0; i < n; i++)
    arr[i] = output[i];
}
 

void radixsort(int arr[], int n) 
{
    int m = getMax(arr, n);
 
    int exp;
    for (exp = 1; m / exp > 0; exp *= 10)
    countSort(arr, n, exp);
}
 
void print(int arr[], int n) 
{
    int i;
    for (i = 0; i < n; i++)
    printf("%d  ", arr[i]);
}
 
int main() 
{
    int arr[100];
    int i, n;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i< n; i++)
    scanf("%d", &arr[i]);

    printf("\n\nGiven arrrrray is: ");
    print(arr, n);

    redixsort(arr, n);

    printf("\n\nSorted array is: ");
    print(arr, n);
    
    printf("\n\n");
    
    return 0;
}
