#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <queue>
using namespace std;
typedef long long ll;
const int Max=1e5+10;
int a[Max],cnt;
int fis[Max],done[Max],fst[Max],dis[Max];
struct edge{
    int v,nxt,w;
}e[Max];
void add(int u,int v,int w){
    e[cnt].v=v;
    e[cnt].w=w;
    e[cnt].nxt=fst[u];
    fst[u]=cnt++;
}

struct NODE{
    int id,dis;
    bool operator < (NODE y) const{
        return dis>y.dis;
    }
};
int main(){
    int n,m;
    cin>>n>>m;
    memset(fst,-1,sizeof(fst));
    memset(dis,0x3f,sizeof(dis));
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        add(u,v,w+a[v]);
        add(v,u,w+a[u]);
    }
    dis[1]=0;
    priority_queue<NODE> q;
    q.push((NODE){1,0});
    while(!q.empty()){
        int u=q.top().id;
        q.pop();
        if(done[u])continue;
        done[u]=1;
        for(int j=fst[u];j+1;j=e[j].nxt){
            int v=e[j].v,w=e[j].w;
            if(dis[v]>dis[u]+w){
                dis[v]=dis[u]+w;
                if(!done[v]){
                    q.push((NODE){v,dis[v]});
                }
            }
        }
        }
    cout<<dis[n]-a[n];
    
    return 0;
}