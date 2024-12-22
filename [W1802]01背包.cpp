#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int w[205],v[205],dp[300][300];
int main(){
    int n,m;
    cin>>m>>n;
    for(int i=1;i<=n;i++){
        cin>>w[i]>>v[i];
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j<w[i]) dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
            // else dp[i][j]=max(dp[i-1][j],dp[i][j-w[i]]+v[i]); 完全背包
            
        }
    }
    cout<<dp[n][m];
    return 0;
}