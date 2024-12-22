#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
struct Edge{
    int u,v,w;
}e[200005];
int fa[5005];
int getfa(int u){
    if(fa[u]==0||fa[u]==u)return fa[u]=u;
    return fa[u]=getfa(fa[u]);
}
bool cmp(Edge a,Edge b){
    return a.w<b.w;
}
int main(){
    int n,m,ans;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v,w;cin>>u>>v>>w;
        e[i].u=u;e[i].v=v;e[i].w=w;
    }
    sort(e+1,e+1+m,cmp);
    ll sum=0;
    int cnt=0;
    for(int i=1;i<=m&&cnt<n-1;i++){
        int u=e[i].u,v=e[i].v,w=e[i].w;
        if(getfa(u)==getfa(v))continue;
        fa[getfa(u)]=getfa(v);
        sum+=w;
        cnt++;
    }
    if(cnt<n-1)cout<<"orz";
    else cout<<sum<<endl;
    
    return 0;
}