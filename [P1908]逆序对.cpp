#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[5000002],f[5000002],n;
int ls[500002],lsn=0;
void add(int p,int d){
    while(p<=n){
        f[p]+=d;
        p+=p&-p;
    }
}
int ask(int p){
    int s=0;
    while(p){
        s+=f[p];
        p-=p&-p;
    }
    return s;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){cin>>a[i];ls[++lsn]=a[i];}
    sort(ls+1,ls+1+lsn);
    int m=unique(ls+1,ls+1+lsn)-ls-1;
    for(int i=1;i<=n;i++){
        a[i]=lower_bound(ls+1,ls+1+m,a[i])-ls;
    }
    ll ans=0;
    for(int i=n;i>=1;i--){
        ans+=ask(a[i]-1);
        add(a[i],1);
    }
    cout<<ans<<endl;
    return 0;
}