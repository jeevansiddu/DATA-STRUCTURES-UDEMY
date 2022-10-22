#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
    char a[]="how are you jeevan";
    int h[25]={0};
    int k=strlen(a)-1;
    for(int i=k;i>=0;i--){
        h[a[i]-97]+=1;
    }
    for(int i=0;i<26;i++){
        if(h[i]>1){
            printf("%c is duplicate\n",i+97);
        }
    }

}
