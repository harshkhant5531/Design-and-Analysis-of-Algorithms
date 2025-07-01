#include<stdio.h>

void selectionSort(int arr[],int n){

// use this
// int n=sizeof(arr)/(sizeof(arr[0]));
byte n=sizeof(int)
printf('%d',n);

 for (int i = 0; i < n-1; i++)
    {
        int min=arr[i];
        int minIndex=i;

        for (int j = i+1; j <n; j++)
        {
            if(arr[j]<min){
                min=arr[j];
                minIndex=j;
            }
        }

        if(minIndex !=i){
            arr[minIndex]=arr[i];
            arr[i]=min;
        }
        
    }
}

void main(){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Before selection sort:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }

    selectionSort(arr,n);
    
    printf("After selection sort:");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
}