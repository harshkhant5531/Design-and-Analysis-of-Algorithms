#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *file;
    file=fopen("best_100.txt","w");
    for(int i=1;i<=100;i++){
        fprintf(file,"%d ",i);
    }
    fclose(file);

    file=fopen("best_1000.txt","w");
    for(int i=1;i<=1000;i++){
        fprintf(file,"%d ",i);
    }
    fclose(file);

    file=fopen("best_10000.txt","w");
    for(int i=1;i<=10000;i++){
        fprintf(file,"%d ",i);
    }
    fclose(file);

    file=fopen("best_100000.txt","w");
    for(int i=1;i<=100000;i++){
        fprintf(file,"%d ",i);
    }
    fclose(file);



    //worst case


    file=fopen("worst_100.txt","w");
    for(int i=100;i>=1;i--){
        fprintf(file,"%d ",i);
    }
    fclose(file);

    file=fopen("worst_1000.txt","w");
    for(int i=1000;i>=1;i--){
        fprintf(file,"%d ",i);
    }
    fclose(file);

    file=fopen("worst_10000.txt","w");
    for(int i=10000;i>=1;i--){
        fprintf(file,"%d ",i);
    }
    fclose(file);

    file=fopen("worst_100000.txt","w");
    for(int i=100000;i>=1;i--){
        fprintf(file,"%d ",i);
    }
    fclose(file);


    //avg case


    file=fopen("avg_100.txt","w");
    for(int i=1;i<=100;i++){
        fprintf(file,"%d ",rand()%100);
    }
    fclose(file);

    file=fopen("avg_1000.txt","w");
    for(int i=1;i<=1000;i++){
        fprintf(file,"%d ",rand()%1000);
    }
    fclose(file);

    file=fopen("avg_10000.txt","w");
    for(int i=1;i<=10000;i++){
        fprintf(file,"%d ",rand()%10000);
    }
    fclose(file);

    file=fopen("avg_100000.txt","w");
    for(int i=1;i<=100000;i++){
        fprintf(file,"%d ",rand()%100000);
    }
    fclose(file);


    printf("Executed!");
}