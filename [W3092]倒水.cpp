#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[100005],d[100005],pred[100005];
int main(){
    int n,k;cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    int L,R,P;
    for(int i=1;i<=k;i++){
        cin>>L>>R>>P;
        d[L]+=P;
        d[R+1]-=P;
    }
    for(int i=1;i<=n;i++){
        pred[i]=pred[i-1]+d[i];
        a[i]+=pred[i];
        cout<<a[i]<<' ';
    }
    return 0;
}