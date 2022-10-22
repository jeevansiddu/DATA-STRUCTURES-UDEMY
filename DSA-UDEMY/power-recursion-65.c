#include<stdio.h>
int pow(int,int);
int pownormal(int m,int n){
    if(n==0) return 1;
    else{
        return m*pow(m,(n-1));
    }
}
int main(){
    int r=pownormal(2,9);
    printf("%d",r);
}
int pow(int a,int b){
    if(b==0){
        return 1;

    }
    else if(b%2==0){
        return pow(a*a,b/2);
    }
    else{
        return a*pow(a*a,(b-1)/2);
    }
}
