#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int p=6662333;
ll ksm(ll x,ll y){
    x%=p;
    if(y==0) return 1;
    if(y%2==1) return ksm(x,y-1)*x%p;
    ll t=ksm(x,y/2);
    return t*t%p;
}
int main(){
    ll n;cin>>n;cout<<ksm(2,n-1)<<endl;
    return 0;
}