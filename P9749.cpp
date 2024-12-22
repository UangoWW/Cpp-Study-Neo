#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
ll n,d,v[100001],a[100001];


int main(){
    cin>>n>>d;
    for(int i=1;i<n;i++) cin>>v[i];
    for(int i=1;i<=n;i++) cin>>a[i];
    ll sum=0;
    ll p=1,q,x=0;
    while(p!=n){
        ll dis=0;
        for(q=p+1;q<=n;q++){
            dis+=v[q-1];
            if(a[q]<a[p])break;

        }
        if(q>n) q=n;
        ll k;
        if(x>=dis){
          k=0; 
        }
        if((dis-x)%d==0) k=(dis-x)/d;
        else k=(dis-x)/d+1;
        sum+=(ll)k*a[p];
        x=x+d*k-dis;
        p=q;
    }
    cout<<sum<<endl;
    return 0;
}