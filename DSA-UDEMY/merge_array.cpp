#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    int a[]={2,4,8,10,13,30,45};
    int b[]={1,3,5,9,12,100,200};
    int *c;
    c=(int *)malloc(sizeof(int));
    int k=sizeof(a)/sizeof(int);
    int l=sizeof(b)/sizeof(int);
    int i=0,j=0,z=0;
    while(i<k && j<l){
        if(a[i]<b[j]){
            c[z++]=a[i++];
        }
        else{
            c[z++]=b[j++];
        }

    }
    for(;i<k;i++){
        c[z++]=a[i];
    }
    for(;j<l;j++){
        c[z++]=b[j];
    }
    for(int q=0;q<z;q++){
        printf("%d ",c[q]);
    }
}
