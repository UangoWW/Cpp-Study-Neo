#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int fa[100005],n;
struct road{
    int x,y,t;
}r[100005];

int getfa(int u){
    if(fa[u]==u||fa[u]==0) return fa[u]=u;
    return fa[u]=getfa(fa[u]);
}
void merge(int u,int v){
    if(getfa(u)!=getfa(v)){
        fa[getfa(u)]=getfa(v);
    }
}
bool cmp(road a,road b){
    return a.t<b.t;
}
int cjihe(){
   int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(fa[i]==i) sum++;
		if(sum==2) return 0;
	}
	return 1;
}

int main(){
    int m;cin>>n>>m;
    for(int i=1;i<=n;i++)fa[i]=i;
    for(int i=1;i<=m;i++) cin>>r[i].x>>r[i].y>>r[i].t;
    sort(r+1,r+m+1,cmp);
    for(int i=1;i<=m;i++){
        merge(r[i].x,r[i].y);
        if(cjihe()==1){
            cout<<r[i].t<<endl;
            return 0;
        }
    }
    cout<<-1;
    
    return 0;
}