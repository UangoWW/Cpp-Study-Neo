#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int maxn=1e5+10;
const int maxm=1000005;
struct edge{
    int u,v,w;
    edge(int a=0,int b=0,int c=0){
        u=a,v=b,w=c;
    }
}e[maxm];
int dis[maxn],done[maxn];
int fst[maxn],nxt[maxm];
int main(){
    int n,m,s;
    cin>>n>>m>>s;
    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        e[i]=edge(u,v,w);
        nxt[i]=fst[u];
        fst[u]=i;
    }
    memset(dis,0x3f3f3f3f,sizeof(dis));
    dis[s]=0;
    for(int i=1;i<=n;i++){
        int minn=0x3f3f3f3f,u=-1;
        for(int j=1;j<=n;j++){
            if(done[j]==0&&dis[j]<minn){
                minn=dis[j];
                u=j;
            }
        }
        if(u<0) break;
        done[u]=1;
        for(int j=fst[u];j!=0;j=nxt[j]){
            int v=e[j].v,w=e[j].w;
            if(dis[v]>dis[u]+w){
                dis[v]=dis[u]+w;
            }
        }
    }
    for(int i=1;i<=n;i++)cout<<dis[i]<<" ";
    return 0;
}