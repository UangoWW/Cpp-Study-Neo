#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int p=1e9+7;
int a[55];
ll sum=1;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){
        if(a[i]-(i-1)<=0){cout<<0;return 0;}
        else sum*=(a[i]-(i-1)),sum%=p;
    }
    cout<<sum;
    return 0;
}