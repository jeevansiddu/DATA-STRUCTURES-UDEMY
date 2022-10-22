#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct Array{
    int a[20];
    int length;
    int size;

};
int binarysearch(struct Array arr,int x){
    int low,mid,high;
    low=0;
    high=arr.length-1;
    while(low<=high){
            mid=(low+high)/2;
        if(arr.a[mid]==x){
            return mid;

        }
        else if(arr.a[mid]<x){
            low=mid+1;

        }
        else{
            high=mid-1;
        }
    }
}
void display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        printf("%d ",arr.a[i]);
    }
}
void append(struct Array *arr,int x){
    arr->a[arr->length]=x;
    arr->length++;
}
void Insert(struct Array *k,int pos,int value){
    for(int i=k->length;i>pos;i--){
        k->a[i]=k->a[i-1];

    }
    k->a[pos]=value;
    k->length++;
}
int Delete(struct Array *arr,int pos){
    int x=0;
    if(pos>=0 && pos<arr->length){
        x=arr->a[pos];
        for(int i=pos;i<arr->length-1;i++){
            arr->a[i]=arr->a[i+1];

        }
        arr->length--;
        return x;
    }
}
int linearsearch(struct Array arr,int val){
    for(int i=0;i<arr.length;i++){
        if(val==arr.a[i]){
            return i;
        }
    }
    return 0;
}
void Swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

int improvedlinearsearch(struct Array *arr,int val){
    for(int i=0;i<arr->length;i++){
        if(val==arr->a[i]){
            Swap(&arr->a[i],&arr->a[i-1]);  //transposition
            return i-1;
        }
    }
    return 0;
}
void Reverse(struct Array *arr){
    int *b;
    b=(int *)malloc(sizeof(int)*arr->length);
    for(int i=arr->length-1,j=0;i>=0;i--,j++){
        b[j]=arr->a[i];
    }
    for(int i=0;i<arr->length;i++){
        arr->a[i]=b[i];
    }
}
void Reverse2(struct Array *arr){
    for(int i=0,j=arr->length-1;i<j;i++,j--){
        Swap(&arr->a[i],&arr->a[j]);
    }
}
void Insertmidarray(struct Array *arr,int x){
    int i=arr->length-1;
    while(i>=0 && arr->a[i]>x){
        arr->a[i+1]=arr->a[i];
        i--;
    }
    arr->a[i+1]=x;
    arr->length++;

}
void lefton_one_side(struct Array *arr){
    int i=0;
    int j=arr->length-1;
    while(i<j){
        while(arr->a[i]<0){
            i++;
        }
        while(arr->a[j]>=0){
            j++;
        }
        if(i<j){
            Swap(&arr->a[i],&arr->a[j]);
        }
    }
}

int main(){
    struct Array arr={{0,1,2,3,4,5},6,20};
    //append(&arr,6);
    //Insert(&arr,2,10);//arguments= structure variable address, position,value
    //int l=linearsearch(arr,4 );
    //int m=improvedlinearsearch(&arr,4 );
   // printf("%d\n",m);
    struct Array m={{2,5,8,10,14,18,20},7,16};
    //int x=binarysearch(m,10);
   // Reverse2(&m);
   Insertmidarray(&m,6);
  //  printf("\n%d\n",5);
   // printf("%d\n",Delete(&arr,1));
    display(m);

}
