#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int sz
int a[sz];
int mark[sz*2],sum[sz*6],maxx[sz*6];
void build(int node,int L,int R){
    
}
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    build(1,1,n);
    int q;cin>>q;
    while(q--){
        int opt;cin>>opt;
        if(opt==1){
            int L,R,d;cin>>L>>R>>d;
            add(L,R,d);
        }
        else{
            int x;cin>>x;
            cout<<ask(x)<<endl;
        }
    }
    return 0;
}