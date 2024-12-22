#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int n,a[200002],cnt[10002];
int lsh[200002],m=0;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        lsh[++m]=a[i];
    }
    sort(lsh+1,lsh+m+1);
    int mm=unique(lsh+1,lsh+m+1)-1-lsh;//去重
    for(int i=1;i<=n;i++){
        a[i]=lower_bound(lsh+1,lsh+mm+1,a[i])-lsh;

    }
    for(int i=1;i<=n;i++) cnt[a[i]]++;
    for(int i=0;i<=10000;i++){
        if(cnt[i]){
            cout<<lsh[i]<<" "<<cnt[i]<<endl;
        }
    }
    return 0;
}