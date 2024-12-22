
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;
const int szN=1e4+2;
const int szM=5e5+2;
int n,m,S;
struct Edge{
    int u,v,w;
}e[szM];
int tot=0;
vector<int>G[szN];
queue<int>Q;
void add(int u,int v,int w){
    tot++;
    e[tot].u=u;e[tot].v=v;e[tot].w=w;
    G[u].push_back(tot);
}
int dis[szN];
bool inQ[szN];
int main(){
    
    cin>>n>>m>>S;
    for(int i=0;i<m;i++){
        int u,v,w;cin>>u>>v>>w;
        add(u,v,w);

    }
    Q.push(S);
    inQ[S]=true;
    //memset(dis,0x3f3f3f,sizeof(dis));
    
    for(int i=1;i<=n;i++){
        dis[i]=2147483647;
    }
    dis[S]=0;
    while(!Q.empty()){
        int u=Q.front();Q.pop();
        inQ[u]=false;
        for(int i=0;i<G[u].size();i++){
            int id=G[u][i];
            int v=e[id].v,w=e[id].w;
            if(dis[v]>dis[u]+w){
                dis[v]=dis[u]+w;
                if(inQ[v]==false){
                    Q.push(v);
                    inQ[v]=true;
                }
                
            }
        }
    }
    for(int i=1;i<=n;i++)cout<<dis[i]<<" ";
    
    return 0;
}