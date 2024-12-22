#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;
const int szN=100005;
const int szM=100005;
int en=0;
vector<int> G[szN];
int vis[szN];
int ans=0;
int n,m,k;
struct EDGE{
    int u,v,w;
    
}e[szM*2];
void dfs(int u){
    if(u==k){ans++;return;}
    vis[u]=1;
    for(int i=0;i<G[u].size();i++){
        int v=e[G[u][i]].v;
        if(!vis[v]){
            vis[v]=1;
            dfs(v);
            vis[v]=0;
        }
    }
}

int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v,w=0;cin>>u>>v;
        e[en].u=u;e[en].v=v;G[u].push_back(en);en++;
        e[en].u=v;e[en].v=u;G[v].push_back(en);en++;

    }
    cin>>k;
    vis[1]=1;
    dfs(1);
    cout<<ans;
    return 0;
}