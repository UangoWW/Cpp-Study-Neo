#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int dp[1001],a[1001];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)dp[i]=1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int ans=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(a[i]>=a[j])dp[i]=max(dp[i],dp[j]+1);
        }
        ans=max(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}