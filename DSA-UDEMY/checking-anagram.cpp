#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
        char a[]="Decimal";
        char b[]="medical";
        int x=strlen(a);
        int y=strlen(b);
        int h[123]={0};

        if(x==y){
            for(int i=0;a[i]!='\0';i++){
                h[a[i]]++;
            }
            for(int j=0;j<y;j++){
                h[b[j]]--;
                if(h[b[j]]<0){
                    printf("NOT ANAGRAM\n");
                }
            }
            int flag=0;
            for(int i=0;i<122;i++){
                if(h[i]!=0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                printf("anagram");

            }
            else{
                 printf("NOT ANAGRM");
            }
        }
}

