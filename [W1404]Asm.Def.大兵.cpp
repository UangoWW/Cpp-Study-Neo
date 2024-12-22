#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
ll mul(ll x,ll y,ll p){
    if(y==0) return 0;
    if(y%2==1) return (mul(x,y-1,p)+x)%p;
    ll t=mul(x,y/2,p);
    return (t+t)%p;
}
ll a(ll n,ll m, ll p){
    ll s=1;
    for(ll i=n;i>=n-m+1;i--){
        s=mul(s,i%p,p);
    }
    return s;
}
int main(){
    ll n,m,p;
    cin>>n>>m>>p;
    cout<<a(n,m,p);
    return 0;
}