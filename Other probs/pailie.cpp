#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int vis[21],n,a[100];
void print(){
    for(int i=1;i<=n;i++){
        printf("%5d",a[i]);
    }
    cout<<endl;
}
void dfs(int Lv){
    if(Lv>n){
        print();
        return;
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            a[Lv]=i;
            vis[i]=1;
            dfs(Lv+1);
            vis[i]=0;
        }
    }
}
int main(){
    cin>>n;
    dfs(1);
    return 0;
}