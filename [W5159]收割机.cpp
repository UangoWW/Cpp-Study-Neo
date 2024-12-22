#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
ll a[40][40],dp[40][40];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=m;j++){
            if(i==n&&j==1) dp[i][j]=a[i][j];
            else if(i==n&&j>1)dp[i][j]=dp[i][j-1]+a[i][j];
            else if(i<n&&j==1) dp[i][j]=dp[i+1][j]+a[i][j];
            else dp[i][j]=max(dp[i+1][j],dp[i][j-1])+a[i][j];
        }
    }
    cout<<dp[1][m]<<endl;
    return 0;
}