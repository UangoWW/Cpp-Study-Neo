#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int n,a[5000005],x;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    cin>>x;
    if(a[1]>x){cout<<-1;return 0;}
    else if(a[1]==x){cout<<1;return 0;}
    else if(a[n]<x){cout<<-1; return 0;}
    int L=1,R=n,mid;
    while(L+1<R){
        mid=(L+R)/2;
        if(a[mid]<x) L=mid;
        else R=mid;
    }
    if(a[R]==x) cout<<R<<endl;
    else cout<<-1;
    return 0;
}