#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
/*
dp[i][j]=
    min{
    dp[i-1][j]+1
    dp[i][j-1]+1
    dp[i-1][j-1]+(s1[i]!=s2[j])
}
*/
int dp[2002][2002];
char s1[2002],s2[2002];
int main(){
    
    cin>>s1+1>>s2+1;
    for(int i=0;i<=strlen(s1+1);i++){
        for(int j=0;j<=strlen(s2+1);j++){
            if(i==0&&j==0)dp[i][j]=0;
            else if(i==0)dp[i][j]=j;
            else if(j==0)dp[i][j]=i;
            else dp[i][j]=min(
                min(dp[i-1][j]+1,dp[i][j-1]+1)
                ,dp[i-1][j-1]+(s1[i]!=s2[j])
            );
        }
    }
    cout<<dp[strlen(s1+1)][strlen(s2+1)]<<endl;
    return 0;
}