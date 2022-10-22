#include<iostream>
#include<stdio.h>
#include<stdlib.h>
struct array{
    int *a;
    int Size;
    int length;
};
using namespace std;
void display(struct array k){
    for(int i=0;i<k.length;i++){
        printf("%d ",k.a[i]);
    }
}
int main(){
  struct array arr;
  printf("ENTER THE SIZE OF ARRAY FOR MEMORY TO BE ALLOCATED= ");
    int Size;
    cin>>Size;
    arr.Size=Size;
    arr.length=0;
    arr.a=(int *)malloc(sizeof(int)*arr.Size);
    printf("ENTER THE ACTUAL LENGTH OF THE ARRAY= ");
    int n;
    cin>>n;
    arr.length=n;
    if(arr.Size>arr.length){
    for(int i=0;i<n;i++){
        scanf("%d ",&arr.a[i]);
    }
    display(arr);

    }
    else{
        struct array k;
        printf("Select the increased size");
        int increasedsize;
        cin>>increasedsize;

        k.a=(int *)malloc(sizeof(int)*increasedsize);
        for(int i=0;i<n;i++){
            scanf("%d ",&k.a[i]);

        }
        delete []arr.a;
        k.length=n;
        k.Size=increasedsize;
        display(k);

    }

}
