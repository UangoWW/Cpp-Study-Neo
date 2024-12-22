
// dij
#include <iostream>
#include <vector>
#include <cstring> 
using namespace std;
const int szN = 10005;
const int szM = 500005;
int n,m,S;
struct Edge{
	int u,v,w;
}e[szM]; int tot=0; // 总边数 
vector<int> g[szN];
void add(int u,int v,int w){
	tot++; e[tot].u=u; e[tot].v=v; e[tot].w=w;
	g[u].push_back(tot);
}
int dis[szN];
bool done[szN];
void dijsktra()
{
	dis[S]=0;
	for(int i=1;i<=n;i++)
	{
		int u=-1,minn=0x7fffffff; 
		for(int j=1;j<=n;j++) if(done[j]==false)
		{
			if(minn>dis[j])
			{
				minn=dis[j];
				u=j;
			}
		}
        if(u<0) break;
		done[u]=1; 
		for(int i=0;i<g[u].size();i++){
			int id=g[u][i];
			int v= e[id].v,w=e[id].w;
			if(dis[v]>dis[u]+w) dis[v]=dis[u]+w;
		}
	}
}

int main()
{
	cin>>n>>m>>S;
	for(int i=0;i<m;i++){
		int u,v,w; cin>>u>>v>>w;
		add(u,v,w);
	}
	for(int i=1;i<=n;i++) dis[i]=0x7fffffff;
	dijsktra();
	for(int i=1;i<=n;i++) cout << dis[i] << " ";
	return 0;
}