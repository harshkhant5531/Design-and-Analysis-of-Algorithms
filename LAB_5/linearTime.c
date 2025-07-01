#include<stdio.h>
#include<time.h>

void linearSearch(int arr[],int n ,int find){
    int i;
    for(int i=0;i<n;i++){
        if(arr[i]==find){
            printf("Elemnet found at index %d:",i);
            return;
        }
        
    }
     printf("Element are not found:\n");
}

void main(){
    
    int find;
    printf("Enter a element for search:");
    scanf("%d",&find);




    //timecomplexcity

    FILE *file;
    clock_t start,end;
    double cpu_time_used;
    int arr[100000];
    int n=100000;
    file=fopen("best_1000000.txt","r");
    for(int i=0;i<n;i++){
        fscanf(file,"%d",&arr[i]);
    }
    fclose(file);
    printf("best case  1000000 scenario:\n");
    start=clock();
    linearSearch(arr,n,find);
    end=clock();
    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time taken to Linear Search : %lf seconds\n",cpu_time_used);

    
}