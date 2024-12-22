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
int main(){
    int n,m,ans=0;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        G[u].push_back(v);
        rd[v]++;
    }
    for(int i=1;i<=n;i++){
        if(rd[i]==0){
            dp[i]=1;
            Q.push(i);
        }
    }
    while(!Q.empty()){
        int u=Q.front();Q.pop();
        a.push_back(u);
        for(int i=0;i<G[u].size();i++){
            int v=G[u][i];
            if(--rd[v]==0) Q.push(v);
        }
    }
    for(int i=0;i<a.size();i++){
        int u=a[i];
        for(int j=0;j<G[u].size();j++){
            int v=G[u][j];
            dp[v]=(dp[v]+dp[u])%cs;
        }
        if(G[u].size()==0)ans=(ans+dp[u])%cs;
    }
    cout<<ans<<endl;
    return 0;
}