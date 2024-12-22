#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
char G[105][105];
int vis[105][105];
int n,m,cnt;
int dx[8]={0,-1,-1,-1, 0, 1,1,1};
int dy[8]={1, 1, 0,-1,-1,-1,0,1};
void dfs(int x,int y){
    vis[x][y]=1;
    for(int i=0;i<8;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&G[nx][ny]=='W'&&vis[nx][ny]==0){
            dfs(nx,ny);
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>G[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(vis[i][j]==0&&G[i][j]=='W'){
                cnt++;
                dfs(i,j);
            }
        }
    }
    cout<<cnt;
    return 0;
}