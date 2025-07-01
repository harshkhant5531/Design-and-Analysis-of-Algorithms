#include<stdio.h>
void main(){
 int num1,sum=0,i; 
    printf("Enter a number 1:");
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++){
        sum=sum+i;
    }
    printf("%d",sum);

}