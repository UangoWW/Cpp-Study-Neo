#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int ksm(int x,int y){
    if(y==0) return 1;
    if(y%2==1) return ksm(x,y-1)*x;
    int t=ksm(x,y/2);
    return t*t;
}
int main(){
    
    return 0;
}