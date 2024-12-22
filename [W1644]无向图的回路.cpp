#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
vector<int> G[100005];
int vis[100005];
bool flag=false;
int fa[100005];
void dfs(int u){
    if(flag) return;
    vis[u]=1;
    for(int i=0;i<G[u].size();i++){
        int  v=G[u][i];
        if(vis[v]==0){
            fa[v]=u;
            dfs(v);
        }else{
            if(v!=fa[u])flag=true;
        }
    }
}
int main(){
    int n,m;cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==0) dfs(i);
        if(flag) break;
    }
    if(flag)cout<<"circle";
    else cout<<"no circle";    
    return 0;
}