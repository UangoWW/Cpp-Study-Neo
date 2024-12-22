#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int dp[20001],a[35];
int main(){
    int v,n;cin>>v>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=v;j>=a[i];j--){
            dp[j]=max(dp[j],(dp[j-a[i]]+a[i]));
        }
    }
    cout<<(v-dp[v]);
    return 0;
}

