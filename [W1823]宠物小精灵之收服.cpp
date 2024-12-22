#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int dp[1002][502];
int main(){
    int n,m,K;cin>>n>>m>>K;
    int C=0,R=m;
    for(int i=1;i<=K;i++){
        int num,dmg;cin>>num>>dmg;
        for(int j=n;j>=num;j--)
            for(int k=m-1;k>=dmg;k--){
                dp[j][k]=max(dp[j][k],dp[j-num][k-dmg]+1);
                if(C<dp[j][k]||C==dp[j][k]&&R<m-k){
                    C=dp[j][k];R=m-k;
                }
            }
        
    }
    cout<<C<<" "<<R<<endl;
    return 0;
}