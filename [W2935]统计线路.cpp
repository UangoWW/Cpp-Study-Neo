#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int G[11][11],vis[11][11],n,cnt;
int fxy[5][2]={{0,1},{-1,0},{0,-1},{1,0}};
void dfs(int x,int y){
    if(G[x][y]==2){
        cnt++;
        return;
    }
    for(int i=0;i<4;i++){
        int nx=x+fxy[i][0];
        int ny=y+fxy[i][1];
        if(nx>=1&&nx<=n&&ny>=1&&ny<=n&&G[nx][ny]!=1&&vis[nx][ny]==0){
            vis[nx][ny]=1;
            dfs(nx,ny);
            vis[nx][ny]=0;
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
    vis[1][1]=1;
    dfs(1,1);
    cout<<cnt<<endl;
    return 0;
}