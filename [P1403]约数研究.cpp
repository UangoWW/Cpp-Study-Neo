#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;
typedef long long ll;
int main(){
    int n,ans=0;cin>>n;
    for(int i=1;i<=n;i++){
        ans+=n/i;
    }
    cout<< ans << endl;
    return 0;
}