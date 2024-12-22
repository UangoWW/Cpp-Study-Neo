#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long ll;
int g[1000][1000],n,m;//n-x m-y
int main(){
    memset(g,-1,sizeof(g));
    cin>>n>>m;
    int N;
    cin>>N;
    int x,y;
    for(int i=0;i<N;i++){
        cin>>x>>y;
        g[x][y]=0;
    }
    g[0][0]=1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(g[i][j]==0)continue;
            if(i==0&&j==0) g[i][j]=1;
            else if(i==0){
                g[i][j]=g[i][j-1];
            }else if(j==0){
                g[i][j]=g[i-1][j];
            }
            else{
                g[i][j]=g[i-1][j]+g[i][j-1];
            }
        }
    }
    cout<<g[n][m];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<g[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    return 0;
}