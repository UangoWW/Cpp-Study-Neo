#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[500005],pre[500005];
int main(){
    int n,m,L,R;cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) pre[i]=pre[i-1]+a[i];
    while(m--){
        cin>>L>>R;
        cout<<pre[R]-pre[L-1]<<endl;
    }
    return 0;
}