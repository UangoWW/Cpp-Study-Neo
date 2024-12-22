#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;
int n;
int rd[100005],time_[100005],dp[100005];
vector<int> g[100005];
queue<int> Q;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        int a,b,c;cin>>a>>b>>c;
        time_[a]=b;
        while(c){
            rd[a]++;
            g[c].push_back(a);
            cin>>c;
        }
    }
    for(int i=1;i<=n;i++){
        if(rd[i]==0){
            Q.push(i);
            dp[i]=time_[i];
        }
    }
    while(!Q.empty()){
        int u=Q.front();Q.pop();
        for(int i=0;i<g[u].size();i++){
            int v=g[u][i];
            dp[v]=max(dp[v],dp[u]+time_[v]);
            if(--rd[v]==0)Q.push(v);

        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)ans=max(ans,dp[i]);
    cout<<ans<<endl;
    return 0;
}