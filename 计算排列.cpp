#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int p=1e9+7;
int C[1002][1002];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i)C[i][j]=1;
            else C[i][j]=(C[i-1][j-1]+C[i-1][j])%p;
        }
    }
    cout<<C[n][m]<<endl;
    return 0;
}