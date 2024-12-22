#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int N=1e6+2;
int a[N];
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    int x;
    cin>>x;
    int p=lower_bound(a,a+n,x)-a;
    if(p<n&&a[p]==x) cout<<p+1<<endl;
    else cout<<"-1"<<endl;
    return 0;
}