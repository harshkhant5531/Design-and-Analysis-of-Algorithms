#include<stdio.h>

void linearSearch(int arr[],int n ,int find){
    int i;
    for(int i=0;i<n;i++){
        if(arr[i]==find){
            printf("Elemnet found at index %d:",i);
            return;
        }
        
    }
     printf("Element are not found:");
}
void main(){
    int n;
    int find;
    printf("Enter a size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter a elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     printf("Enter a element for search:");
     scanf("%d",&find);
    linearSearch(arr,n,find);
}