#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
struct Node{
    int id,val;
}a[8001];
bool cmp(Node x,Node y){
    if(x.val!=y.val){
        return x.val<y.val;
    }
    return x.id<y.id;
}
int Rank[8002];
int main(){
    int n,Q;cin>>n>>Q;
    for(int i=1;i<=n;i++){
        a[i].id=i;cin>>a[i].val;
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++) Rank[a[i].id]=i;
    while(Q--){
        int opt,x,y;cin>>opt;
        if(opt==2){cin>>x;cout<<Rank[x]<<endl;}
        else{
            cin>>x>>y;
            int p=Rank[x];
            if(y>a[p].val){
                for(int i=p;i<n;i++){
                    if(cmp(a[i+1],a[i])){
                        swap(a[i],a[i+1]);
                        Rank[a[i].id]=i;Rank[a[i+1].id]=i+1;
                    }
                }
            }else if(y<a[p].val){
                for()
            }
        }
    }
    return 0;
}