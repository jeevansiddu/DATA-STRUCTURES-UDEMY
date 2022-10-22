#include<stdio.h>
int main(){
    char mac[1001][1001]={"111.23.4.5","222.33.4.5","123.45.6.7"};
    char ip[1001][1001]={"121.22.3.4","212.32.4.5","111.11.1.1"};
    printf("Enter 1 for arp and 2 for rarp");
    int ch;
    char ip1[1001];
    scanf("%d",&ch);
    switch(ch){
    case 1:
        scanf("%s",ip1);
        for(int i=0;i<3;i++){
            if(strcmp(ip1,ip[i])==0){
                printf("%s",mac[1]);
            }
        }
    }
}
