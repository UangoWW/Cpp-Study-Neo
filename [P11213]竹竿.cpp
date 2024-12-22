#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int MAXN=1e5+5;
struct stick{
    int len,id;
}s[MAXN];
int c[MAXN],m=0;
int main(){
    int n,a,b;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i].len>>s[i].id;
        c[++m]=s[i].id;
        c[++m]=s[i].len-s[i].id;
    }
    sort(c+1,c+m+1);
    cout<<c[m]+c[m-1];
    return 0;
}