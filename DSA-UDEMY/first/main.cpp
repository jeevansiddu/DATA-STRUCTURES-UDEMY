#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
struct student{
    int roll;
    char name[20];
    char a;

}r1;

int main()
{
    int *a;
    struct student *m;
    int k=1000;
    cout<<sizeof(m)<<endl<<sizeof(a)<<endl;
    a=&k;
    printf("%d %d",k,*a);
    int *kk;
    kk=new int[2];//(int *)malloc(2*sizeof(int));
    kk[0]=10;
    kk[1]=15;
    printf("  %d %d\n",kk[0],kk[1]);
}
