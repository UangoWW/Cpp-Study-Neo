#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;
vector<int> G[10002];
int End[50002],start[50002],d[50002];
int dp[15002];
int main(){
    int n,m;cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>start[i]>>End[i]>>d[i];
        G[start[i]].push_back(i);
    }
    for(int i=1;i<=n;i++) dp[i]=-2e9;
    dp[1]=0;
    for(int u=1;u<=n;u++){
        if(dp[u]==-2e9) continue;
        for(int j=0;j<G[u].size();j++){
            int k=G[u][j];
            int v=End[G[u][j]],w=d[k];
            if(dp[v]<dp[u]+d[k]){
                dp[v]=dp[u]+w;
            }
        } 
    }
    if(dp[n]==-2e9) cout<<-1<<endl;
    else cout<<dp[n]<<endl;
    return 0;
}