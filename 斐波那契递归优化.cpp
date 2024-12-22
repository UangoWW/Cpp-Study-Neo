#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int m[45];
int f(int n){
    if(m[n]!=0) return m[n];
    if(n==1||n==2) return m[n]=1;
    else return m[n]=f(n-1)+f(n-2);
}
int main(){
    int n;cin>>n;cout<<f(n);
    return 0;
}