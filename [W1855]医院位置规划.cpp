#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;
vector<int> G[105];
int vis[105],dis[105],w[105],fa[105];
int sum;
void dfs(int u){
    vis[u]=1;
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
        if(!vis[v]){
            fa[v]=u;
            dis[v]=dis[u]+1;
            dfs(v);

        }
    }
}
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        int u,v;cin>>w[i]>>u>>v;
        if(u){G[i].push_back(u);G[u].push_back(i);}
        if(v){G[i].push_back(v);G[v].push_back(i);}
    }
    int min_=-1,ans;
    for(int i=1;i<=n;i++){
        memset(vis,0,sizeof(vis)); memset(dis,0,sizeof(dis));

        dfs(i);
        sum=0;
        for(int j=1;j<=n;j++)sum+=w[j]*dis[j];
        if(min_==-1||min_>sum) min_=sum;
    }
    cout<<min_<<endl;
    return 0;
}