#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
bool prime(int n){
    if(n==1) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n,a;
    cin>>n;
    a=n;
    cout<<a<<'=';
    for(int i=2;i<=sqrt(n)&&n!=1;i++){
            while(n%i==0){
                n/=i;
                cout<<i;
                if(n!=1)cout<<'x';
            }
        
    }
    if(n!=1)cout<<n;
    return 0;
}