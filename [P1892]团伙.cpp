#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int fa[2004];
bool flag[2004];
int getfa(int u){
    if(fa[u]==0||fa[u]==u) return fa[u]=u;
    return fa[u]=getfa(fa[u]);
}
void merge(int u,int v){
    if(getfa(u)!=getfa(v)) fa[getfa(u)]=getfa(v);
}
int main(){
    int n,m,cnt=0;cin>>n>>m;
    while(m--){
        char c;int u,v;
        cin>>c>>u>>v;
        if(c=='E'){
            merge(u,v+n);
            merge(u+n,v);
            flag[v+n]=flag[u+n]=true;
        }else {merge(u,v);}
    }
    for(int i=1;i<=n+n;i++) if(i<=n||flag[i])
    {
        if(getfa(i)==i) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}