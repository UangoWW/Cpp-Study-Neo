#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
ll dp[1002][1002];
int main(){
    int M,N;cin>>M>>N;
    for(int i=1;i<=M;i++)
        for(int j=1;j<=N;j++)
        {
            if(j>i||j==0) dp[i][j]=0;
            else if(j==i) dp[i][j]=1;
            else dp[i][j]=dp[i-1][j]*j+dp[i-1][j-1];
        }
    cout<<dp[M][N];
    return 0;
}