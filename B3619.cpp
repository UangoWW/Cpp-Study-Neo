#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
char f (int x){
    if(x>=0&&x<=9)return x+'0';
    else return x-10+'A';

}
char a[52];
int L=0;
int main(){
    int k,x;
    cin>>x>>k;
    while(x){
        a[++L]=f(x%k);
        x/=k;
    }
    for(int i=L;i>=1;i--){
        cout<<a[i];
    }
    return 0;
}