#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[23],n,cnt;
bool col[23],xie1[50],xie2[50];
void dfs(int k){
    if(k==n+1){
        if(++cnt<=3){
            for(int i=1;i<=n;i++) cout<<a[i]<<" ";
            cout<<endl;
        }
        return ;
    }
    for(int i=1;i<=n;i++){
        if(col[i]==0&&xie1[k-i+8]==0&&xie2[k+i-1]==0){
            a[k]=i;
            col[i]=xie1[k-i+8]=xie2[k+i-1]=1;
            dfs(k+1);
            col[i]=xie1[k-i+8]=xie2[k+i-1]=0;
        }
    }
}
int main(){
    cin>>n;
    dfs(1);
    cout<<cnt;
    return 0;
}
