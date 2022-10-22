#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact=1;
    while(n>=1){
        fact=(fact*n);
        n=n-1;
    }
    cout<<fact;
}
//fact*fact-1
