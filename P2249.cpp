#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int MAXA=10000000;
const int MAXN=10000000;
int n,m,a[MAXA],b[MAXN];
int aaa(int x){//查找第一个x的位置
    if(x<a[1]|a[n]<x) return -1;
    if(x==a[1]) return 1;
    int l=1,r=n;
    while (l+1<r)
    {
        int mid=(l+r)/2;
        if(a[mid]>=x) r=mid;
        else l=mid;
    }
    if(a[r]==x) return r;
    return -1;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++)cin>>b[i];
    for(int i=1;i<=m;i++){
        cout<<aaa(b[i])<<" ";
    }
    return 0;
}