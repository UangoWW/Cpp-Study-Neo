#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int vis[20001],a[20001],n,ans=0;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        vis[i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if(a[k]==a[i]+a[j]&&vis[i]!=1){
                    ans++;
                    vis[a[k]]=1;
                }
            }
        }
    }
    cout<<ans;
    return 0;
}