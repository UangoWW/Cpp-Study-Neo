#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <queue>
using namespace std;
typedef long long ll;
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
int G[11][11],n=10;
struct node{
    int x,y;
    node(int xx=0,int yy=0){
        x=xx,y=yy;
    }
};
queue<node> Q;
int vis[105][105];
void bfs(int sx,int sy){
    vis[sx][sy]=0;
    Q.push(node(sx,sy));
    while(!Q.empty()){
        node u=Q.front();
        Q.pop();
        int x=u.x,y=u.y;
        for(int i=0;i<4;i++){
            int nx=x+dx[i],ny=y+dy[i];
            if(nx>=1&&nx<=n&&ny>=1&&ny<=n&&G[nx][ny]==0&&vis[nx][ny]==0){
                vis[nx][ny]=1;
                Q.push(node(nx,ny));
            }
        }
    }
}
int main(){
    for(int i=1;i<=10;i++)
        for(int j=1;j<=10;j++)
            cin>>G[i][j];
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(i==1||j==1||i==10||j==10){
                if(G[i][j]==0&&vis[i][j]==0)bfs(i,j);
            }
        }   
    }
    int cnt=0;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(G[i][j]==0&&vis[i][j]==0) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}