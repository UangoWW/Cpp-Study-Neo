#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
double a,b,c;
double f(double x){
    return a*x*x+b*x+c;
}
int main(){
    cin>>a>>b>>c;
    double L=-1e9,R=1e9,m1,m2;
    while(R-L>1e-6){
        m1=L+(R-L)/3;
        m2=R-(R-L)/3;
        if(f(m1)<f(m2)) R=m2;
        else L=m1;
    }
    cout<<L;
    return 0;
}