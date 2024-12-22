#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int dp[24*60+2];
int main(){
    int a,b,c,d,n;
    scanf("%d:%d %d:%d %d",&a,&b,&c,&d,&n);
    int m=(c*60+d)-(a*60+b);
    for(int i=1;i<=n;i++){
        int T,C,P;cin>>T>>C>>P;
        if(P==0){
            for(int j=T;j<=m;j++)
                dp[j]=max(dp[j],dp[j-T]+C);
        }else{
            for(int k=1;k<=P;P-=k,k*=2){
                for(int j=m;j>=k*T;j--){
                    dp[j]=max(dp[j],dp[j-k*T]+k*C);
                }
            }
            for(int j=m;j>=T*P;j--){
                dp[j]=max(dp[j],dp[j-T*P]+C*P);
            }
        }
    }
    cout<<dp[m]<<endl;
    return 0;
}