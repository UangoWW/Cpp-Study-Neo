#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;
typedef long long ll;
int l,r,f[1000002][32],a[1000002];
int n,m;
int er[32];
void pwork(){
    er[0]=1;
    for(int i=1;i<=30;i++) er[i]=er[i-1]*2;
    for(int j=0;er[j]<=n;j++){
        for(int i=1;i+er[j]-1<=n;i++){
            if(j==0) f[i][j]=a[i];
            else f[i][j]=min(f[i][j-1],f[i+er[j-1]][j-1]);
        }
    }
}
int ask(int l,int r){
    int k=log2(r-l+1);
    return min(f[l][k],f[r-er[k]+1][k]);
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    pwork();
    for(int j=m;j<=n;j++) cout<<ask(j-m+1,j)<<endl;
    return 0;
}