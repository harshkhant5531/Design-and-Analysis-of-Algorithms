#include<stdio.h>
int main(){
    int n;
    printf("Enter a size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter a elements of array:");
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int swapped=0;
        for (int j = 0; j <n-1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
            
        }
        if(swapped==0){
            break;
        }
        
    }
    for(int i=0;i<n;i++){
        printf("");
        printf("%d",arr[i]);
    }
   
    return 1;
}