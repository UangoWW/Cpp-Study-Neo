#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int gcd(int x,int y){
    if(y==0) return x;
    return gcd(y,x%y);
}
int gcd2(int x,int y){
    while(y){
        int t=x%y;
        x=y;y=t;
    }
    return x;
}
int ksm(int x,int y){
    if(y==0) return 1;
    if(y%2==1) return ksm(x,y-1)*x;
    int t=ksm(x,y/2);
    return t*t;
}
void exgcd(int a,int b,int &x,int &y){
    if(b==0) {x=1;y=0;return;}
    int x0,y0;
    exgcd(b,a%b,x0,y0);
    x=y0;
    y=x0-a/b*y0;
}
int main(){
    ll a,b,x,y;cin>>a>>b;
    exgcd(a,b,x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}