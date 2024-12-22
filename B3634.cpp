#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
ll gcd(ll x,ll y){
    if(y==0) return x;
    return gcd(y,x%y);
}

int main(){
    ll x,y;
    cin>>x>>y;
    ll sum=x*y;
    ll gccd=gcd(x,y);
    ll lcm=sum/gccd;
    cout<<gccd<<" "<<lcm;
    return 0;
}