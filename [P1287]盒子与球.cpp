#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int f[105][105];
int fac(int x){
    if(x==0) return 1;
    return x*fac(x-1);
}
int main(){
    int n,r;cin>>n>>r;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=r&&j<=i;j++){
            if(j==1) f[i][j]=1;
            else f[i][j]=f[i-1][j-1]+f[i-1][j]*j;
        }
    }
    cout<<f[n][r]*fac(r)<<endl;
    return 0;
}