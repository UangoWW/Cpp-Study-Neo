#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;
vector<int> G[102];
int n,vis[102],fa[102];
int deep[102],s[102];
void dfs(int u){
    int cnt=0;
    vis[u]=1;
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
        if(vis[v]==0){
            fa[v]=u;
            deep[v]=deep[u]+1;
            dfs(v);
            cnt+=s[v];
        }
        
    }
    s[u]=cnt+1;

}
int main(){
    cin>>n;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    deep[1]=1;
    dfs(1);
    for(int i=1;i<=n;i++){
        cout<<s[i]<<" "<<deep[i]<<endl;
    }
    return 0;
}