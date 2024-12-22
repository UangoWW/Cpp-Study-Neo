#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <stdlib.h>
using namespace std;
typedef long long ll;
int gcd(int x,int y){
    if(y==0) return x;
    return gcd(y,x%y);
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int gxy=gcd(x,y);
    cout<<gcd(gxy,z);
    return 0;
}