#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
bool iprime(int a){
    if(a<2)return false;
    for(int i=2;i*i<=a;i++)if(a%i==0)return false;
    return true;   
}
int main(){
    
    ll S;
    cin>>S;

    ll max=0;
    for(int i=S/2;i>=2;i--){
        if(iprime(i)&&iprime(S-i)){
            int P=i*(S-i);
            if(P>max){
                max=P;
            }
        }
    }
    cout<<max<<endl;
    return 0;
}