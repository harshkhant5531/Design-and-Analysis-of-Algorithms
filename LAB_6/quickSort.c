#include <stdio.h>

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, high);

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pit = partition(arr, low, high);
        quickSort(arr, low, pit - 1);
        quickSort(arr, pit + 1, high);
    }
}

void main()
{

    int num;
    printf("Enter size of array: ");
    scanf("%d", &num);

    int arr[num];

    printf("Enter elements of array: ");

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, num - 1);
    printf("Sorted array: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d  ", arr[i]);
    }
}