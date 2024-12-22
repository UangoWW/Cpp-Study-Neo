#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;
typedef long long ll;
int n;
char d[]="0123456789ABCDEF";
void f(int x){
    int a[100]={},c=0;
    while(x){
        a[c++]=x%n;
        x/=n;
    }
    for(int i=c-1;i>=0;i--) cout<<d[a[i]];
}
int main(){
    double x;
    cin>>x>>n;
    f(x);
    cout<<".";
    
    x-=int(x);
    for(int i=1;i<=3&&x>0;i++){
        x*=n;
        cout<<d[int(x)];
        x-=int(x);
    }
    return 0;
}