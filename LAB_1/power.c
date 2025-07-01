#include<stdio.h>
#include<math.h>
void main(){
    int num1,num2,ans; 
    printf("Enter a number 1:");
    scanf("%d",&num1);

    printf("Enter a number 2:");
    scanf("%d",&num2);

    ans=pow(num1,num2);
    printf("%d",ans);

}