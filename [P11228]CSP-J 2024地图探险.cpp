#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
char G[1002][1002];
int vis[1002][1002];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int main(){
    int T;cin>>T;
    
    while(T--){
        memset(vis,0,sizeof(vis));
        
        int n,m,k,x,y,d;cin>>n>>m>>k>>x>>y>>d;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>G[i][j];
            }
        }
        vis[x][y]=1;
        while(k--){
            int nx=x+dx[d],ny=y+dy[d];
            if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&G[nx][ny]=='.'){
                x=nx;y=ny;
            }
            else d=(d+1)%4;
            vis[x][y]=1;
        }
        int ans=0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                if(vis[i][j])ans++;
        cout<<ans<<endl;
    }
    return 0;
}