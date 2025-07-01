#include<stdio.h>


void heapify(int arr [], int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;

    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }

    
    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }

    if(largest!=i){
          int temp=arr[i];
           arr[i]=arr[largest];
           arr[largest]=temp;
           heapify(arr,n,i);
    }


}

void heapSort(int arr[],int n){

// use this return array length
// int n=sizeof(arr)/(sizeof(arr[0]));

 for (int i = n/2-1; i>=0; i--)
        heapify(arr,n,i);
    {
        for (int i = n; i>=0; i--)
        {
           int temp=arr[i];
           arr[i]=arr[0];
           arr[0]=temp;
            heapify(arr,n,0);
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

    heapSort(arr,n);
    
    printf("After selection sort:");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
}