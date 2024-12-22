#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <map>
using namespace std;
typedef long long ll;
map<ll,ll> F;
ll f(ll x){
    if(F[x]>0) return F[x];
    int n=1;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            n+=f(i);
            if(i*i!=x){
                n+=f(x/i);
            }
        }
    }
    return F[x]=n;
}
int main(){
    ll x;
    cin>>x;
    cout<<f(x);
    return 0;
}