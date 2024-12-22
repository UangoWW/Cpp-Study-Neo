#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int C[2002][2002],pre[2002][2002];
int main(){
    int t,k;cin>>t>>k;
    for(int i=0;i<=2000;i++)
        for(int j=0;j<=i;j++){
            if(i==j||j==0) C[i][j]=1;
            else C[i][j]=(C[i-1][j]+C[i-1][j-1])%k;

            if(j==0) pre[i][j]=0;
            else if(j==i) pre[i][j]=pre[i][j-1]+(!C[i][j]);
            else pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+(!C[i][j]);
        }
    while(t--){
        int n,m;cin>>n>>m;
        cout<<pre[n][min(n,m)]<<endl;
    }
    return 0;
}