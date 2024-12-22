#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <int> G[100005];
bool vis[100005];
int sum=0;
void bfs(int S){
    queue<int>Q;
    Q.push(S);vis[S]=1;
    while(!Q.empty()){
        int u=Q.front();
        Q.pop();
        sum++;
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
    }
    bfs(1);
    cout<<sum;
    
    return 0;
}