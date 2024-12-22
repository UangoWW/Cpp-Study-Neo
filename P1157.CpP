#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int vis[21],n,a[100],m;
void print(){
    for(int i=1;i<=m;i++){
        printf("%3d",a[i]);
    }
    cout<<endl;
}
void dfs(int Lv){
    if(Lv>m){
        print();
        return;
    }
    for(int i=a[Lv-1]+1;i<=n;i++){
        // if(vis[i]==0){
            a[Lv]=i;
            dfs(Lv+1);
        //}
    }
}
int main(){
    cin>>n>>m;
    dfs(1);
    return 0;
}