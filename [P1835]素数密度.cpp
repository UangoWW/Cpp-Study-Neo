#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;
typedef long long ll;
bool b[1000002];
LL ksm(LL x,LL y,int p){
    x%=p;
    if(y==1) return x;
    if(y%2){
        return ksm(x,y-1,p)*x%p;
        
    }
}
int main(){
    int L,R;cin>>L>>R;
    int cnt=0;
    for(int i=2;i<=50000;i++){
        for(ll j=max(L/i,2)*i;j<=R;j+=i) if(j>=L){
            b[j-L]=1;
        }
    }
    
    for(int i=L;i<=R;i++){
        if(b[i-L]==0) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}