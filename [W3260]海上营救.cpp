#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <queue>
using namespace std;
typedef long long ll;
int n,m,cnt;
int dx[8]={0,-1,-1,-1, 0, 1,1,1};
int dy[8]={1, 1, 0,-1,-1,-1,0,1};
char G[105][105];
struct node{
    int x,y;
    node(int xx=0,int yy=0){
        x=xx,y=yy;
    }
};
queue<node> Q;
int step[105][105];
void bfs(int sx,int sy){
    step[sx][sy]=0;
    Q.push(node(sx,sy));
    while(!Q.empty()){
        node u=Q.front();
        Q.pop();
        int x=u.x,y=u.y;
        for(int i=0;i<8;i++){
            int nx=x+dx[i],ny=y+dy[i];
            if(nx>=1&&nx<=n&&ny>=1&&ny<=n&&G[nx][ny]!='*'&&step[nx][ny]==-1){
                step[nx][ny]=step[x][y]+1;
                Q.push(node(nx,ny));
            }
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
    int x,y;cin>>x>>y;
    memset(step,-1,sizeof(step));
    bfs(1,1);
    cout<<step[x][y]<<endl;
    return 0;
}