#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int SZ=5005;
int fa[SZ];
int getfa(int u){
    if(fa[u]==0||fa[u]==u) return fa[u]=u;
    return fa[u]=getfa(fa[u]);
}
void merge(int u,int v){
    if(getfa(u)!=getfa(v)){
        fa[getfa(u)]=getfa(v);
    }
}
int main(){
    int n,m,p;
    cin>>n>>m>>p;
    while(m--){
        int u,v;
        cin>>u>>v;
        merge(u,v);
    }
    while(p--){
        int u,v;
        cin>>u>>v;
        if(getfa(u)==getfa(v)){
            cout<<"Yes"<<endl;
        }else cout<<"No"<<endl;
    }
    return 0;
}