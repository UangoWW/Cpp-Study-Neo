#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;
typedef long long ll;
int f[1000002][28],er[30];
int a[1000002],n,m;
int main(){
    er[0]=1;
    for(int i=1;i<30;i++) er[i]=er[i-1]*2;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int j=0;er[j]<=n;j++){
        for(int i=1;i+er[j]-1<=n;i++){
            if(j==0) f[i][j]=a[i];
            else f[i][j]=min(f[i][j-1],f[i+er[j-1]][j-1]);
        }
    }
    while(m--){
        int l,r;
        scanf("%d%d",&l,&r);
        int k=log2(r-l+1);
        cout<<min(f[l][k],f[r-er[k]+1][k])<<" ";
    }
    return 0;
}