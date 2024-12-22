#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int fa[2005];
int getfa(int u){
    if(fa[u]==u||fa[u]==0) return fa[u]=u;
    return fa[u]=getfa(fa[u]);
}
void merge(int u,int v){
    if(getfa(u)!=getfa(v)){
        fa[getfa(u)]=getfa(v);
    }
}
int main(){
    int t;
    int n,m;
    
    while(cin>>n){
        int ans=0;
        memset(fa,0,sizeof(fa));
        if(n==0) break;
        cin>>m;
        for(int i=1;i<=n;i++){
            fa[i]=i;
        }
        for(int i=1;i<=m;i++){
            int aa,bb;
            cin>>aa>>bb;
            merge(aa,bb);
        }
        for(int i=1;i<=n;i++){
            if(getfa(i)==i)ans+=1;
        }
        cout<<ans-1<<endl;
    }
    
    return 0;
}