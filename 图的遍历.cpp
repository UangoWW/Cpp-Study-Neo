#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <int> G[100005];
bool vis[100005];
void dfs(int u){
    vis[u]=1;
    if(u!=1)cout<<"-";
    cout<<u;
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
        if(!vis[v]){
            dfs(v);
        } 
    }
}
void bfs(int S){
    queue<int>Q;
    Q.push(S);vis[S]=1;
    while(!Q.empty()){
        int u=Q.front();
        Q.pop();
        if(u!=1){
            cout<<"-";
        }
        cout<<u;
        for(int i=0;i<G[u].size();i++){
            int v=G[u][i];
            if(!vis[v]){
                Q.push(v);
                vis[v]=1;
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        G[u].push_back(v);
        
        G[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        
        sort(G[i].begin(),G[i].end());
    }
    //不一定联通写法
    for(int i=1;i<=n;i++) if(!vis[i]) dfs(i);
    //一定联通写法
    dfs(1);
    cout<<endl;
    memset(vis,0,sizeof(vis));
    //不
    for(int i=1;i<=n;i++) if(!vis[i]) bfs(i);
    //定
    bfs(1);
    return 0;
}