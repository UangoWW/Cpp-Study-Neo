#include <iostream>
#include <cstring>
#include <cstdio>
#include <queue>
using namespace std;
typedef long long ll;
char g[102][102];
bool vis[102][102];
int n,m;
int fxy[4][2]={{0,1},{1,0},{0,-1},{-1,0}};

struct node{
    int x,y;
};
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>g[i][j];
        }
    }
    queue<node> r;
    node start;
    start.x=1;
    start.y=1;
    r.push(start);
    vis[1][1]=true;
    while(!r.empty()){
        int x=r.front().x;
        int y=r.front().y;
        for(int i=0;i<4;i++){
            int xx=x+fxy[i][0];
            int yy=y+fxy[i][1];
            if(xx<1||xx>n||yy<1||yy>m)continue;
            if(g[xx][yy]=='#')continue;
            if(vis[xx][yy]==0){
               vis[xx][yy]=1;
               node v;
               v.x=xx;
               v.y=yy;
               r.push(v); 
            }
        }
        r.pop();
        if(vis[n][m])break;
    }
    if(vis[n][m])cout<<"Yes";
    else cout<<"No";
    
    
    return 0;
}