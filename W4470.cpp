#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;
int G[23][23];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            G[i][j]=999;
        }
    }
    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        G[u][v]=w;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<G[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}