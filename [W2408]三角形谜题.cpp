#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[1004][1004],dp[1004][1004];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>a[i][j];
        }
    }
    dp[1][1]=a[1][1];
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            dp[i][j]=max(dp[i-1][j-1]+a[i][j],dp[i-1][j]+a[i][j]);
        }
    }
    int ans=-1e7;
    for(int i=1;i<=n;i++){
        ans=max(ans,dp[n][i]);
    }
    cout<<ans<<endl;
    return 0;
}