#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int main(){
    int a[1001],b[1001],c[1001],d[1001],max=0;
    int q,w,e,r;
    cin>>q;
    for(int i=1;i<=q;i++)cin>>a[i];
    sort(a+1,a+q+1);
    max=a[q];

    cin>>w;
    for(int i=1;i<=w;i++)cin>>b[i];
    sort(b+1,b+w+1);
    max+=b[w];

    cin>>e;
    for(int i=1;i<=e;i++)cin>>c[i];
    sort(c+1,c+e+1);
    max+=c[e];

    cin>>r;
    for(int i=1;i<=r;i++)cin>>d[i];
    sort(d+1,d+r+1);
    max+=d[r];
    cout<<max;
    return 0;
}