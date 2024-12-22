#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int MAXX=1e5+5;
int a[MAXX];
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    int cnt=0;
    for(int i=2;i<=n;i++){
        if(a[i]>a[cnt+1])cnt++;
    }
    cout<<n-cnt<<endl;
    return 0;
}