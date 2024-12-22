#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int p=998244353;
ll ksm(ll x,ll y){
    ll re=1;
    for(;y;y/=2,x=x*x%p) if(y&1) re=re*x%p;
    return re;
}
ll fac[5000002],inv[5000002];
int main(){
    int T,N;cin>>T>>N;
    fac[0]=1;
    for(int i=1;i<=N;i++) fac[i]=fac[i-1]*i%p;
    inv[0]=1;
    for(int i=1;i<=N;i++) inv[i]=inv[i-1]*ksm(i,p-2)%p;
    ll ans=0;
    while(T--){
        int n,m;scanf("%d%d",&n,&m);
        if(n<m) continue;
        ans^=fac[n]*inv[m]%p*inv[n-m]%p;
    }
    cout<<ans<<endl;
    return 0;
}