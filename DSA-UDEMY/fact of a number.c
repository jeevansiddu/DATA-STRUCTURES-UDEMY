#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact=0;
    while(n>0){
        fact=n*n-1;
        n=n-1;
    }
    cout<<fact;
}
