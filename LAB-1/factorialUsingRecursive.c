#include<stdio.h>

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}
void main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
int fact=factorial(n);
printf("%d",fact);

}
