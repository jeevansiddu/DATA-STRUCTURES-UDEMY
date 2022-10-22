#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct student{
    char name[20];
    int roll;
};
int fun_callbyvalue(struct student r1){
    r1.name[0]='k';
    r1.roll=30;
    cout<<r1.name<<endl<<r1.roll;
}
void fun_callbyaddress(struct student *p){
    p->name[0]='R';
    p->roll=25;
}
void fun_callbyreference(struct student &k){
    k.name[0]='z';
    k.roll=80;
}
struct aray{
    int a[5];
    int n;
};
int sum_arraycallbyvalue(struct aray a1){
    a1.a[2]=10;
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+a1.a[i];

    }
    return sum;
}
int main(){
    struct student r={"jeevan",19};
    int k=fun_callbyvalue(r);
    fun_callbyaddress(&r);
    cout<<endl<<r.name<<endl<<r.roll<<endl;
    fun_callbyreference(r);
    cout<<endl<<r.name<<endl<<r.roll<<endl;
    struct aray x={{3,4,5,6,7},3};
    int sum=sum_arraycallbyvalue(x);
    cout<<sum;
}
