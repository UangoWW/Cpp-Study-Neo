#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
struct Edge{
    int u,v,w;
}e[200005];
int fa[5005];
int getfa(int u){
    if(fa[u]==0||fa[u]==u)return fa[u]=u;
    return fa[u]=getfa(fa[u]);
}
bool cmp(Edge a,Edge b){
    return a.w<b.w;
}
int main(){
    int a,n;
    cin>>a>>n;
    int m=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int u=i,v=j,w;cin>>w;
            if(u<v){
                if(w==0||w>a) w=a;
                m++;
                e[m].u=u;e[m].v=v;e[m].w=w;
            }
        }
    }
    sort(e+1,e+1+m,cmp);
    // for(int i=1;i<=m;i++){
    //     int u,v,w;cin>>u>>v>>w;
    //     e[i].u=u;e[i].v=v;e[i].w=w;
    // }
    // sort(e+1,e+1+m,cmp);
    ll sum=0;
    int cnt=0;
    for(int i=1;i<=m&&cnt<n-1;i++){
        int u=e[i].u,v=e[i].v,w=e[i].w;
        if(getfa(u)==getfa(v))continue;
        fa[getfa(u)]=getfa(v);
        sum+=w;
        cnt++;
    }
    cout<<sum+a<<endl;
    
    return 0;
}