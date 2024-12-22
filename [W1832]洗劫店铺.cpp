#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int T,n;
int dp[100007][2],a[100007];
int main(){
    cin>>T;
    while(T--){
        memset(dp,0,sizeof(dp));
        memset(a,0,sizeof(a));
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        dp[1][0]=0;dp[1][1]=a[1];
        for(int i=2;i<=n;i++){
            dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
            dp[i][1]=dp[i-1][0]+a[i];
            
        }
        cout<<max(dp[n][0],dp[n][1])<<endl;
    }
    return 0;
}