#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[23],n,m;
bool vis[23];
void dfs(int k){
    if(k==m+1){
        for(int i=1;i<=m;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            a[k]=i;
            vis[i]=1;
            dfs(k+1);
            vis[i]=0;
        }
    }
}
int main(){
    cin>>n>>m;
    dfs(1);
    return 0;
}