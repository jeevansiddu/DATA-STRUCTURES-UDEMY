#include<iostream>
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[5]={2,4,6,8,9};
    int *p;
    p=(int *)malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        p[i]=a[i];
    }
    for(int i=0;i<5;i++){
        printf("%d ",p[i]);// dynamic array
    }
    int *q;
    q=(int *)malloc(10*sizeof(int));//array resizing
    for(int i=0;i<5;i++){
        q[i]=p[i];

    }
    free(p);
    p=q;
    printf("\n");
    q[5]=10;
    for(int i=0;i<6;i++){
        printf("%d ",p[i]);
    }
}
