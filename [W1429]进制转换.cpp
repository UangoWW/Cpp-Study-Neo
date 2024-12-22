#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
char d[17]="0123456789ABCDEF";
int main(){
    int x,k;cin>>x>>k;
    int b[100]={};
    int c=0;
    while(x){
        b[c++]=x%k;
        x/=k;
    }
    for(int i=c-1;i>=0;i--){
        cout<<d[b[i]];
    }
    return 0;
}