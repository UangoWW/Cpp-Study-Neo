#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[23],v[23],n,m;
void dfs(int k){
    if(k==m+1){
        for(int i=1;i<=m;i++){
            cout<<v[a[i]]<<" ";
        }
        cout<<endl;
        return ;
    }
    for(int i=a[k-1]+1;i<=n;i++){
        a[k]=i;
        dfs(k+1);
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>v[i];
    dfs(1);
    return 0;
}