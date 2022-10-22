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
    int *z;
    z=new int[2];
    z[0]=10;
    z[1]=15;
    cout<<z[0]<<z[1];
    printf("%d %d\n",z[0],z[1]);
}
