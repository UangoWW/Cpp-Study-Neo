#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int n,m,a[1000099];
bool aaa(int x){
    ll ans=0;
    for(int i=1;i<=n;i++){
        if(a[i]>x){
            ans+=a[i]-x;
        }
    }
    if(ans>=m)return 1;
    return 0;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int l=0,r=1e9+2;
    while(l+1<r){
        int mid=(l+r)/2;
        if(aaa(mid)){l=mid;}
        else r=mid;
    }
    cout<<l;
    return 0;
}