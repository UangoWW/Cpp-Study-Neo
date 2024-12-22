#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"-";
        n=abs(n);
    }
    int l=0;
    while(n){
        l=l*10+n%10;
        n/=10;
    }
    cout<<l;
    return 0;
}