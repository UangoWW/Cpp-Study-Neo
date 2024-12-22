#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[1002][1002],pre[1002][1002];
int main(){
    int n,m,c;cin>>n>>m>>c;
    int maxx=INT_MIN;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+a[i][j];
        }
    }
    int x,y;
    for(int i=c;i<=n;i++){
        for(int j=c;j<=m;j++){
            int sum=pre[i][j]-pre[i][j-c]-pre[i-c][j]+pre[i-c][j-c];
            if(sum>maxx){
                maxx=sum;
                x=i;y=j;
            }
        }
    }
    cout<<x-c+1<<" "<<y-c+1;
    return 0;
}