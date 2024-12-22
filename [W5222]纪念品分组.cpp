#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[30002];
int main(){
    int n,w,ans=0;
    cin>>w>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int L=0,R=n-1;
    while(L<=R){
        if(a[L]+a[R]<=w){
            ans++;
            L++;
            R--;
        }else{
            ans++;
            R--;
        }
    }
    cout<<ans;
    return 0;
}