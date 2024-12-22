#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;
typedef long long ll;
// int k;
// int f(char ch){
//     if(ch>=0&&ch<='9') return ch-'0';
//     if(ch>='A'&&ch<='Z') return ch-'A'+10;
//     return ch-'a'+10;
// }
// int change(string s,int k){
//     int y=0;
//     for(int i=0;i<s.size();i++){
//         y=y*k+f(s[i]);
//     }
//     return y;
// }


int main(){
    //求loga b
    /*
    cout<<log(b)/log(a);

    double fabs(double x);双精度绝对值
    int abs(int x);
    double ceil(double x);向上取整
    double floor(double x);下
    double round(double x);四舍五入
    double pow(double a,double b)a的b次幂 
    */


    //数字反转
    // ll n;cin>>n;
    // if(n==0)cout<<0;
    // else if(n<0){
    //     cout<<"-";
    //     n=abs(n);
    // }
    // int k=0;
    // while(n){
    //    k=k*10+n%10;
    //    n/=10;
    // }
    // cout<<k;

    // cin>>k;
    // string s;cin>>s;
    // cout<<change(s,k);

    //十转二
    int x;cin>>x;
    int b[100]={};
    int c=0;
    while(x){
        b[c++]=x%2;
        x/=2;
    }
    for(int i=c-1;i>=0;i--){
        cout<<b[i];
    }
    return 0;
}