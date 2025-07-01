
#include<stdio.h>
#include<time.h>

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
    
    //timecomplexcity

    FILE *file;
    clock_t start,end;
    double cpu_time_used;
    int arr[100000];
    int n=100000;
    file=fopen("worst_100000.txt","r");
    for(int i=0;i<n;i++){
        fscanf(file,"%d",&arr[i]);
    }
    fclose(file);
    printf("worst case  100000 scenario:\n");
    start=clock();
    insertionSort(arr,n);
    end=clock();
    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time taken to insertion sort : %lf seconds\n",cpu_time_used);

}
