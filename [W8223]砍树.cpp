#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int h[10000001],n,m;
bool check(int x){
    ll ans=0;
    for(int i=1;i<=n;i++){
        if(h[i]>x)ans+=h[i]-x;
    }
    if(ans>=m) return 1;
    return 0;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>h[i];
    int low=0,high=1e9;
    while(low+1<high){
        int mid=(low+high)/2;
        if(check(mid)) low=mid;
        else high=mid;
    }
    cout<<low<<endl;
    return 0;
}