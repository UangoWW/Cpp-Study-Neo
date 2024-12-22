#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
struct DATA{
    int val,cnt;
}a[20000];
void insert(ll x){
    int y=(x*1789+1987)%17777;
    while(a[y].val!=0&&a[y].val!=x){
        y++;
        y%=20000;
    }
    a[y].val=x;a[y].cnt++;
}
bool cmp(DATA x,DATA y){return x.val<y.val;}
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        insert(x);
        
    }
    sort(a,a+20000,cmp);
    for(int i=0;i<20000;i++){
        if(a[i].cnt>0) cout<<a[i].val<<" "<<a[i].cnt<<endl;
    }
    return 0;
}