#include<stdio.h>
#include<stdlib.h>>
#include<stdbool.h>

#define SIZE 5

int queue[SIZE];
int front=-1;
int rear=-1;

bool isEmpty() {
    return (front==-1 && rear==-1);
}

bool isFull(){
    return(rear==SIZE-1);
}


void enqueue(int value){
    if(isFull){
        printf('Queue is full\n');
    }
    if(isEmpty()){
        front=rear=0;
    }
    else{
        rear++;
    }
    queue[rear]=value;
    printf("Enqeue \n",value);
}