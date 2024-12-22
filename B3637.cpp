#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int dp[5005];
int main(){
    //dp[i]=max(dp[j]+1) j<i aj<ai
    int n;cin>>n;
    int a[5005]={},ans=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)dp[i]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(a[j]<a[i]){
                dp[i]=max(dp[i],dp[j]+1);
            }
            
        }
        ans=max(ans,dp[i]);
    }
    cout<<ans;

    return 0;
}