#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int main(){
    int n,x,s=0;cin>>n;
    while(n--){
        cin>>x;
        s^=x;
    }
    cout<<s<<endl;
    return 0;
}