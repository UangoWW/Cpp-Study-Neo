#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int A[]={-1,-1,1,7,4,2,6,8,10,18,22,20,28,68,88,108,188,200,208,288,688};
int main(){
    int T;cin>>T;
    while(T--){
        int n;cin>>n;
        if(n<=20)cout<<A[n]<<endl;
        else{
            cout<<A[n%7+14];
            int t=(n-n%7-7-7)/7;
            while(t--)cout<<8;
            cout<<endl;
        }
    }
    return 0;
}