#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int N=5e6+5;
int n,x,a[N];
int find(int L,int R,int x){
    if(L>R) return -1;
    int mid=(L+R)/2;
    if(x==a[mid]) return mid;
    if(x<a[mid]) return find(L,mid-1,x);
    return find(mid+1,R,x);
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    cin>>x;
    cout<<find(1,n,x);
    return 0;
}