#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int main(){
    int n;
    ll ans;
    cin>>n;
    if(n%2==1){
        cout<<n*(n-1)*(n-2);
    }else{
        if(n%3==0)cout<<(n-1)*(n-2)*(n-3);
        else cout<<n*(n-1)*(n-3);
        cout<<
    }
    
    return 0;
}