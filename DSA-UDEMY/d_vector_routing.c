#include<stdio.h>
#include<stdlib.h>
struct node{
    int dist[20];
    int from[20];
}rt[10];

int main(){
    int nodes,costmat[10][101];
    printf(" Enter the no. of nodes: ");
    scanf("%d",&nodes);
    for(int i=0;i<nodes;i++){
        for(int j=0;j<nodes;j++){
            scanf("%d",&costmat[i][j]);
            costmat[i][i]=0;
            rt[i].dist[j]=costmat[i][j];
            rt[i].dist[j]=j;
        }
    }
    int count=0;
    do{
        count=0;
        for(int i=0;i<nodes;i++){
            for(int j=0;j<nodes;j++){
                for(int k=0;k<nodes;k++){
                    if(rt[i].dist[j]>(costmat[i][k]+rt[k].dist[j])){
                        rt[i].dist[j]=rt[i].dist[k]+rt[k].dist[j];
                        rt[i].from[j]=k;
                        count++;
                    }
                }
            }
        }
    }while(count!=0);
    for(int i=0;i<nodes;i++){
        printf(" for rounter %d\n",i+1);
        for(int j=0;j<nodes;j++){
            printf("from %d via %d distance %d\n",j+1,rt[i].from[j]+1,rt[i].dist[j]);
        }
        printf("\n");
    }
}
