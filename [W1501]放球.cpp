#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[2003],n,cnt=0;
bool vis[2003];
bool prime(int x){
    for(int i=2;1LL*i*i<=x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
void dfs(int k){
    if(k==n+1){
        cnt++;
        return;
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==0&&(k==1||prime(i+a[k-1]))){
            a[k]=i;
            vis[i]=1;
            dfs(k+1);
            vis[i]=0;
        }
    }
}
int main(){
    cin>>n;
    dfs(1);
    cout<<cnt;
    return 0;
}