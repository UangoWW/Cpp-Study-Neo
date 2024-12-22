#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int fa[100005],ans;
struct Edge{
    int u,v,w;
}e[100005];
int getfa(int u){
    if(fa[u]==0||fa[u]==u)return fa[u]=u;
    return fa[u]=getfa(fa[u]);
}
bool cmp(Edge a,Edge b){
    return a.w<b.w;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)fa[i]=i;
    for(int i=1;i<=m;i++){cin>>e[i].u>>e[i].v>>e[i].w;}
    sort(e+1,e+m+1,cmp);
    int cnt=0;
    for(int i=1;i<=m;i++){
        int a=getfa(e[i].u),b=getfa(e[i].v);
        if(a!=b){
            ans=max(e[i].w,ans);
            fa[a]=b;
            cnt++;
            if(cnt==n-1)break;
        }

    }
    cout<<n-1<<" "<<ans<<endl;
    return 0;
}