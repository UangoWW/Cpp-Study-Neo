#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;
struct Edge{
    int u,v,w;
}e[400005];
vector<int>G[5005];
int idx;
void add(int u,int v,int w){
    idx++;
    e[idx].u=u;e[idx].v=v;e[idx].w=w;
    G[u].push_back(idx);
}
int dis[5005];
bool vis[5005];
int main(){
    int n,m;cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v,w;cin>>u>>v>>w;
        add(u,v,w);
        add(v,u,w);
    }
    memset(dis,-1,sizeof(dis));
    dis[1]=0;
    ll sum=0;
    for(int i=1;i<=n;i++){
        int u=-1,minn=-1;
        for(int j=1;j<=n;j++) if(vis[j]==0&&dis[j]>=0)
        {
            if(minn<0||dis[j]<minn) minn=dis[j],u=j;
        }
        if(u==-1){cout<<"orz"<<endl;return 0;}
        vis[u]=1;
        sum+=dis[u];
        for(int j=0;j<G[u].size();j++){
            int k=G[u][j];
            if(dis[e[k].v]<0||dis[e[k].v]>e[k].w) dis[e[k].v]=e[k].w;
        }
    }
    cout<<sum<<endl;
    return 0;
}