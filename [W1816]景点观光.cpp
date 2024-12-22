#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[1001],dp1[1001],dp2[1001];
int main(){
    int n;cin>>n;int maxx=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        dp1[i]=dp2[i]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(a[j]<a[i]){
                dp1[i]=max(dp1[i],dp1[j]+1);
            }
        }
    }
    for(int i=n;i>=1;i--){
        for(int j=i;j<=n;j++){
            if(a[j]<a[i]){
                dp2[i]=max(dp2[i],dp2[j]+1);
            }
        }
    }
    for(int i=1;i<=n;i++){
        maxx=max(maxx,dp1[i]+dp2[i]-1);
    }
    cout<<maxx<<endl;
    return 0;
}