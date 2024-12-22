#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int f[500002],n;
int a[500002];
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
    for(int i=1;i<=n;i++)cin>>a[i];
    while(m--){
        int op,x,y,k;cin>>op;
        if(op==1){
            cin>>x>>y>>k;
            add(x,k);
            add(y+1,-k);
        }else{
            cin>>x;
            cout<<a[x]+query(x)<<endl;
        }
    }
    return 0;
}