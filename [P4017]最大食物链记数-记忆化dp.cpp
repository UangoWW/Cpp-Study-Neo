#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
typedef long long ll;
vector<int> G[5002];
queue<int> Q;
int rd[5002];
vector<int> a;
int dp[5002];
ll cs=80112002;
int work(int u){
    if(dp[u]>=0) return dp[u];
    if(G[u].size()==0) return 1;
    int sum=0;
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
        sum=(sum+work(v))%cs;
    }
    return dp[u]=sum;
}
int main(){
    memset(dp,-1,sizeof(dp));
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        G[u].push_back(v);
        rd[v]++;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(rd[i]==0) ans=(ans+work(i))%cs;
    }
    cout<<ans<<endl;
    return 0;
}