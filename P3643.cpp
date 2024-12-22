#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int G[1002][1002];
vector<vector<int> > G;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        G[u][v]=G[v][u]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<G[i][j]<<" ";
        }
        cout<<endl;
    }
    int du=0;
    for(int i=1;i<=n;i++){
        du=0;
        for(int j=1;j<=n;j++){
            if(G[i][j]==1)du++;
        }
        cout<<du<<" ";
        for(int j=1;j<=n;j++){
            if(G[i][j]==1)cout<<j<<" ";
        }
        cout<<endl;
    }

/*
    int n,m; cin>>n>>m;
	G.resize(n+1);
	for(int i=1;i<=m;i++)
	{
		int u,v; cin>>u>>v; // 输入两个端点 
		g[u][v]=g[v][u]=1;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<g[i][j]<<' ';
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++)
	{
		sort(G[i].begin(),G[i].end());
		cout << G[i].size() << ' ';
		for(int j=0;j<G[i].size();j++)
			cout << G[i][j] << ' ';
		cout << endl;
	}





*/
    return 0;
}