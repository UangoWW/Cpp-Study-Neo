#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int p=10007;
int C[1007][1007];
int ksm(int x,int y){
    x%=p;
    if(y==0) return 1;
    if(y%2==1) return ksm(x,y-1)*x%p;
    int t=ksm(x,y/2);
    return t*t%p;
}
int main(){
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i) C[i][j]=1;
            else C[i][j]=(C[i-1][j]+C[i-1][j-1])%p;
        }
    }
    int a,b,k,n,m;cin>>a>>b>>k>>n>>m;
    cout<<C[k][n]*ksm(a,n)%p*ksm(b,m)%p<<endl;
    return 0;
}