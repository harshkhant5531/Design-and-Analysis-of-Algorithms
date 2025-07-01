#include<stdio.h>

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

    }
}
void main(){
    int num;
    printf("Enter the length of the array :");
    scanf("%d", &num);

    int arr[num];


    for(int i = 0; i < num; i++){
         printf("Enter the %dth element: ", i);
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, num);


    for(int i = 0; i < num; i++){
        printf("%d ", arr[i]);
    }

}