#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
//floyd
int G[1002][1002],n,m;
int main(){
    memset(G,0x3f3f3f,sizeof(G));
    cin>>n>>m;
    for(int i=1;i<=n;i++)G[i][i]=0;
    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        G[u][v]=G[v][u]=min(G[u][v],w);
    }
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++) if(i!=k)
            for(int j=1;j<=n;j++)   if(j!=k&&i!=j)
            {
                if(G[i][j]>G[i][k]+G[k][j])
                    G[i][j]=G[i][k]+G[k][j];
            }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<G[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}