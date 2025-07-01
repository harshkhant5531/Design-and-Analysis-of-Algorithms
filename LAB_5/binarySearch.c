#include<stdio.h>
#include<stdbool.h>
#include<time.h>


bool binarySearch(int arr[], int n,  int key) {
    int start = 0;
    int end  = n - 1;
    
    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            return true;
        }
        else if(arr[mid] > key) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return false;
}

void main() {
    int key;
    printf("Enter the key to find in the array :");
    key  = scanf("%d", &key);

    
    FILE *fp;
    clock_t start, end;
    double cpu_time_used;
    int arr[1000000];
    int n = 1000000;

    fp = fopen("best_1000000.txt", "r");
    for(int i = 0; i < n; i++){
        fscanf(fp, "%d", &arr[i]);
    }
    fclose(fp);
    start = clock();
    bool result  = binarySearch(arr, n, key);
    end = clock();
    cpu_time_used = ((double) (end - start))/CLOCKS_PER_SEC;
    if(result){
        printf("Find the key successfully !!!");
    }
    printf("TIME TAKEN TO FIND THE KEY IN  THE ARRAY IS : %f seconds\n\n", cpu_time_used);


}