#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
double a,b,c,d;
double f(double x){
    return a*x*x*x+b*x*x+c*x+d;
}
double work1(double l,double r){
    if(f(l)<0&&f(r)>0){
        while(r-l>0.0000001)
        {
            double mid=(l+r)/2;
            if(f(mid)<0) l=mid;
            else r=mid;
        }
    }else if(f(l)>0&&f(r)<0){
        while(r-l>0.0000001){
            double mid=(l+r)/2;
            if(f(mid)>0) l=mid;
            else r=mid;
        }
    }
    return l;
}
int main(){
    cin>>a>>b>>c>>d;
    double p,q;
    for(p=-101;p<=101;p+=0.5) if(f(p)>0) break;
    for(q=101;q>=-101;q-=0.5) if(f(q)<0) break;
    double x1=work1(-101,p);
    double x2=work1(p,q);

    
    double x3=work1(q,101);
    printf("%.2lf %.2lf %.2lf",x1,x2,x3);
    return 0;
}