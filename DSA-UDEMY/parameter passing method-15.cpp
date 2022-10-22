#include<iostream>
using namespace std;
void swapbyreference(int &x,int &y,int &z){
    int temp;
    temp=x;
    x=y;
    y=z;
    z=temp;

}
void swapbyaddress(int *x,int *y,int *z){
    int temp;
    temp=*x;
    *x=*y;
    *y=*z;
    *z=temp;

}
int main(){
    int a=10,b=15,c=20;
    swapbyaddress(&a,&b,&c);
    swapbyreference(a,b,c);
    cout<<a<<b<<c;
}
