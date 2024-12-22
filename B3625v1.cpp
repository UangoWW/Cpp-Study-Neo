#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;
int n,m;
bool vis[102][102];
char g[102][102];
int fxy[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
void dfs(int x,int y){
    
    vis[x][y]=1;
    for(int i=0;i<4;i++){
        int xx=x+fxy[i][0];
        int yy=y+fxy[i][1];
        if(xx<1||xx>n||yy<1||yy>m)continue;
        if(g[xx][yy]=='#')continue;
        if(vis[xx][yy]==0){
            dfs(xx,yy);
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>g[i][j];
        }
    }
    dfs(1,1);
    if(vis[n][m])cout<<"Yes";
    else cout<<"No";
    return 0;
}