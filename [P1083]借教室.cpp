#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[1000005],d[1000005],L[1000005],R[1000005],x[1000002],pre[1000002],n,m;
int check(int k){//calc the minimum of all numbers after 
    memset(d,0,sizeof(d));
    for(int i=1;i<=k;i++){
        d[L[i]]-=x[i];
        d[R[i]+1]+=x[i];
    }
    int minn=2e9;
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+d[i];
        minn=min(minn,a[i]+pre[i]);
    }
    return minn;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++) cin>>x[i]>>L[i]>>R[i];
    if(check(m)>=0) {cout<<0<<endl;return 0;}
    int low=0,high=m;
    while(low+1<high){
        int mid=(low+high)/2;
        if(check(mid)>=0){
            low=mid;
        }
        else high=mid;
    }
    cout<<-1<<endl<<high<<endl;
    return 0;
}