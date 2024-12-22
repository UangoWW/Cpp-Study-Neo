#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath> 
using namespace std;
typedef long long ll;
const int N=30002;
int fa[N],d[N],sum[N];
int getfa(int u){
    if(fa[u]==u) return u;
    getfa(fa[u]);
    d[u]+=d[fa[u]];
    return fa[u]=fa[fa[u]];
}
int main(){
    int T;cin>>T;
    for(int i=1;i<=30000;i++){
        fa[i]=i;
        d[i]=0;
        sum[i]=1;
    }
    while(T--){
        char x;int i,j;
        cin>>x>>i>>j;
        if(x=='M'){
            int ii,jj;
            ii=getfa(i);jj=getfa(j);
            fa[ii]=jj;
            d[ii]=sum[jj];
            sum[jj]+=sum[ii];
        }else{
            if(getfa(i)!=getfa(j))cout<<-1<<endl;
            else cout<<abs(d[i]-d[j])-1<<endl;
            
        }

    }
    return 0;
}