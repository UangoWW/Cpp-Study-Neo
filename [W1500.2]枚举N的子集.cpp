#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[23],n,m;
bool vis[23];
void dfs(int k){
    if(k==n+1){
        for(int i=1;i<=n;i++){
            if(a[i]){
                cout<<i<<" ";
            }
        }
        cout<<endl;
        return ;
    }
    for(int i=1;i<=n;i++){
        a[k]=i;
        dfs(k+1);
    }
}
int main(){
    cin>>n;
    dfs(1);
    return 0;
}