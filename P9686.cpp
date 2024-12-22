#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
string inw;
int n;
int main(){
    int n,ac=0;cin>>n;
    for(int i=1;i<=n;i++){
        cin>>inw;
        if(inw!="AC")cout<<i<<" ";
    }
    
    return 0;
}