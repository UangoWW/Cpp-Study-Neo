#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int szN=1e5+7;
const int szM=1e5+8;
int vis[szN],ans[szN];
int fst[szN],nex[szM],f;
int en=0;
int n,m;
struct edge
{
    int u,v,w;
}e[szM];
void dfs(int u){
    ans[u]=f;
    vis[u]=1;

    for(int i=fst[u];i!=0;i=nex[i]){
        int v=e[i].v;
        if(vis[v]==0){
            dfs(v);
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;cin>>v>>u;
        en++;e[en].u=u;e[en].v=v;
        nex[en]=fst[u]; fst[u]=en;
    }
    for(int i=n;i>=1;i--){
        f=i;
        if(vis[i]==0) dfs(i);
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<' ';
    }
    return 0;
}