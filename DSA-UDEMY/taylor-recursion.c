#include<stdio.h>
double e(int x,int n){
    static double p=1,f=1;
    if(n==0){
        return 1;
    }
    double r=e(x,n-1);
    p=p*x;
    f=f*n;
    return (r+(p/f));
}
double optimize_e(double x,double n){
    static double s;
    if(n==0) return s;
    s=1+x*s/n;
    return e(x,n-1);
}
void main(){
    double k=optimize_e(2,10);
    printf("%lf ",k);
}
