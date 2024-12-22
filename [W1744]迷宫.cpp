#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int G[11][11],vis[11][11],n,cnt;
int fxy[5][2]={{0,1},{-1,0},{0,-1},{1,0}};
void dfs(int x,int y){
    vis[x][y]=1;
    for(int i=0;i<4;i++){
        int nx=x+fxy[i][0];
        int ny=y+fxy[i][1];
        if(nx>=1&&nx<=n&&ny>=1&&ny<=n&&G[nx][ny]!=1&&vis[nx][ny]==0){
            vis[nx][ny]=1;
            dfs(nx,ny);
        }
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>G[i][j];
        }
    }
    dfs(1,1);
    if(vis[n][n])cout<<"YES"<<endl;
    else cout<<"NO"l
    return 0;
}