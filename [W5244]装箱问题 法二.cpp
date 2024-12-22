#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
bool dp[20002];
int main(){
    int V,n;cin>>V>>n;
    dp[0]=1;
    for(int i=1;i<=n;i++){
        int v;cin>>v;
        for(int j=V;j>=v;j--){
            dp[j]|=dp[j-v];
        }
    }
    for(int i=V;i>=0;i--) if(dp[i])
    {
        cout<<V-i<<endl;
    }
    return 0;
}