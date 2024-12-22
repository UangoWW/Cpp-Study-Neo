#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int f[500002],n;
void add(int p,int d){
    while(p<=n){
        f[p]+=d;
        p+=p&-p;
    }
}
int query(int p){
    int s=0;
    while(p){
        s+=f[p];
        p-=p&-p;
    }
    return s;
}
int main(){
    int m;cin>>n>>m;
    for(int i=1;i<=n;i++){int x;cin>>x;add(i,x);}
    while(m--){
        int op,x,y;cin>>op>>x>>y;
        if(op==1) add(x,y);
        else cout<<query(y)-query(x-1)<<endl;
    }
    return 0;
}