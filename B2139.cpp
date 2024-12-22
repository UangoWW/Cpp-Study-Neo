#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
bool prime(int x){
    if(x==1) return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}
int 反转(int x){
    int k=0;
    while(x){
        k=k*10+x%10;
        x/=10;
    }
    return k;
}
int main(){
    int m,n;
    cin>>m>>n;
    int f=1,ff=0;;
    for(int i=m;i<=n;i++){
        if(prime(i)&&prime(反转(i))){
            if(f){
                cout<<i;
                f=0;
            }
            else cout<<","<<i;
    }
    }
    if(f)cout<<"No";
    return 0;
    
}