#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int d[1002][1002],pre[1002][1002];
int main(){
    int n,m;cin>>n>>m;
    while(m--){
        int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
        d[x1][y1]++;
        d[x2+1][y1]--;
        d[x1][y2+1]--;
        d[x2+1][y2+1]++;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+d[i][j];
            cout<<pre[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}