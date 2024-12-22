#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int N =1e6+2;
struct NODE
{
    int lson,rson;
}a[N];
int n,root=1;
void xianxu(int u){
    if(u==0) return;
    cout<<u<<" ";
    xianxu(a[u].lson);
    xianxu(a[u].rson);

}
void zhongxu(int u){
    if(u==0) return;
    zhongxu(a[u].lson);
    cout<<u<<" ";
    zhongxu(a[u].rson);
}
void houxu(int u){
    if(u==0) return;
    houxu(a[u].lson);
    houxu(a[u].rson);
    cout<<u<<" ";
    
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].lson>>a[i].rson;
    }
    xianxu(root);
    cout<<endl;
    zhongxu(root);
    cout<<endl;
    houxu(root);
    cout<<endl;
    return 0;
}