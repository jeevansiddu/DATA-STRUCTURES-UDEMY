#include<iostream>
#include<conio.h>
#include<stdio.h>
int main(){
    int a[3][4]={{1,2,3,4},{2,4,6,8},{10,5,6,7}};
    int *k[3];
    k[0]=(int *)malloc(sizeof(int));
    k[1]=(int *)malloc(sizeof(int));
    k[2]=(int *)malloc(sizeof(int));
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            k[i][j]=a[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",k[i][j]);
        }
        printf("\n");
    }
}
