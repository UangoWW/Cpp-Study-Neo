#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int N=2e5+2;
int fa[N];
bool flag[N];
int getfa(int u){
    if(fa[u]==u||fa[u]==0){
        return fa[u]=u;
    }
    return fa[u]=getfa(fa[u]);
}
void merge(int u,int v){
    fa[getfa(u)]=getfa(v);
}
int main(){
    int n,m;
    cin>>n>>m;
    int ans=n;
    
    for(int i=1;i<=m;i++){
        int l,r;
        cin>>l>>r;
        for(int j=l;j<=r;){
            if(!flag[j])ans--;
            flag[j]=1;
            j=getfa(j)+1;
            if(j<=r) fa[j-1]=getfa(j);

        }
       cout<<ans<<endl;
    }
    return 0;
}