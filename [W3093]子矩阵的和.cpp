#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[1005][1005],pre[1005][1005];
int main(){
    int n,m,q;cin>>n>>m>>q;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+a[i][j];
        }
    }
    for(int i=1;i<=q;i++){
        int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
        int sum=pre[x2][y2]-pre[x1-1][y2]-pre[x2][y1-1]+pre[x1-1][y1-1];
        cout<<sum<<endl;
    }
    return 0;
}