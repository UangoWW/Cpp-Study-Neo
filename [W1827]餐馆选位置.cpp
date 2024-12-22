#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int f[2001],m[1000],p[1000];
int main(){
    int t;cin>>t;
    while(t--){
        int n,k,ans=0;
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>m[i];
        for(int i=0;i<n;i++) cin>>p[i];
        for(int i=0;i<n;i++){
            f[i]=p[i];
            for(int j=0;j<i;j++){
                if(m[i]-m[j]>k)f[i]=max(f[i],f[j]+p[i]);
            }
            ans=max(ans,f[i]);
        }
        cout<<ans<<endl;
    }

    return 0;
}