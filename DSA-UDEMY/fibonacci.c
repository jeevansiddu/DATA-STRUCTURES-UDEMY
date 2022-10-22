#include<stdio.h>
int f[100];
int mfib(int n){
    if(n<=1){
        f[n]=n;
        return n;

    }
    else{
        if(f[n-2]==-1){
            f[n-2]=mfib(n-2);
        }
        if(f[n-1]==-1){
            f[n-1]=mfib(n-1);
        }
        f[n]=f[n-1]+f[n-2];
        return f[n];
    }
}
void main(){
    for(int i=0;i<100;i++){
        f[i]=-1;
    }

    printf("%d ",mfib(5));
}
