#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#define int long long
using namespace std;
void exgcd(int a,int b,int &x,int &y){
    if(b==0) {x=1;y=0;return;}
    int x0,y0;
    exgcd(b,a%b,x0,y0);
    x=y0;
    y=x0-a/b*y0;
}
int gcd(int x,int y){
    if(y==0) return x;
    return gcd(y,x%y);
}
signed main(){
    int T;cin>>T;
    while (T--)
    {
        int a,b,c;scanf("%lld%lld%lld",&a,&b,&c);
        int d=gcd(a,b);
        if(c%d!=0){printf("-1\n");continue;}
        a/=d;b/=d;c/=d;
        int x,y;
        exgcd(a,b,x,y);
        x*=c;y*=c;
        x=(x%b+b)%b; if(x==0) x=b;
        y=(c-a*x)/b;
        if(y<=0){
            y=(y%a+a)%a; if(y==0) y=a;
            printf("%lld %lld\n",x,y);
        }
        else{
            int xx,yy;
            yy=(y%a+a)%a; if(yy==0) yy=a;
            xx=(c-b*yy)/a;
            int cnt=(xx-x)/b+1;
            printf("%lld %lld %lld %lld %lld\n",cnt,x,yy,xx,y);
        }
    }
    
    return 0;
}