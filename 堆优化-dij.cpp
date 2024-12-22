#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <queue>
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
struct NODE{
    int id,dis;
    NODE(int a=0,int b=0){
        id=a;dis=b;
    }
    bool operator < (NODE y) const
    {
        return dis>y.dis;
    }
};
priority_queue<NODE> Q;
 int dis[maxn],done[maxn];
 int fst[maxn],nxt[maxm];
void add(int u,int v,int w){
    e[++cnt]=edge(u,v,w);
    nxt[cnt]=fst[u];
    fst[u]=cnt;
}
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
    Q.push(NODE(s,0));
    while(!Q.empty()){
        int u=Q.top().id;
        Q.pop();
        if(done[u]) continue;
        done[u]=1;
        for(int j=fst[u];j!=0;j=nxt[j]){
            int v=e[j].v,w=e[j].w;
            if(dis[v]>dis[u]+w){
                dis[v]=dis[u]+w;
                Q.push(NODE(v,dis[v]));
                
            }
        }
    }
    
    for(int i=1;i<=n;i++)cout<<dis[i]<<" ";
    return 0;
}