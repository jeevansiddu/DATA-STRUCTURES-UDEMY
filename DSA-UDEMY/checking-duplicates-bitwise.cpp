#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
    //printf("%d",sizeof(int));
    char a[]="how are you jeevan";
    int h=0,x;
    int l=strlen(a);
    for(int i=0;i<l;i++){
        x=1;
        x=x<<(a[i]-97);
        if((h & x)>0){
            printf("%c is duplicate\n",a[i]);
        }
        else{
            h=h|x;
        }
    }
}
