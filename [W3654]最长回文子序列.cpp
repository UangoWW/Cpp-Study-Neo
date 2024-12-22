#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
string s;
int dp[1002][1002];
int main(){
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++){
        dp[i][i]=1;
    }
    for(int i=n-2;i>=0;i--){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
                dp[i][j]=dp[i+1][j-1]+2;
            }else{
                dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
            }
            
        }
    }
    cout<<dp[0][n-1];
    return 0;
}