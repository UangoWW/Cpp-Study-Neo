#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[200003],dp[200003];
int main(){
    int n,ans=-1005;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        dp[i]=max(a[i],dp[i-1]+a[i]);
        ans=max(ans,dp[i]);
    }
    cout<<ans;
    return 0;
}