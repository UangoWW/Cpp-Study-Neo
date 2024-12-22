#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
void exgcd(int a,int b,int &x,int &y){
    if(b==0) {x=1;y=0;return;}
    int x0,y0;
    exgcd(b,a%b,x0,y0);
    x=y0;
    y=x0-a/b*y0;
}
int main(){
    int a,b,x,y;cin>>a>>b;
    exgcd(a,b,x,y);
    cout<<(x%b+b)%b<<endl;
    return 0;
}