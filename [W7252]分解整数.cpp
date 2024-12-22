#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[23],n,k=3;
int cnt=0;
bool check(int x){
    while(x){
        if(x%10==3||x%10==7) return 0;
        x/=10;
    }
    return 1;z
}
void dfs(int L,int s){
    if(L==k+1){
        if(a[1]==a[2]||a[1]==a[3]||a[2]==a[3])return;
        if(s==n) cnt++;
        return;
    }
    for(int i=a[L-1]+1;i<=(n-s)/(k-L+1);i++){
        if(check(i)){
            a[L]=i;
            dfs(L+1,s+i);
        }
    }
}
int main(){
    cin>>n;
    dfs(1,0);
    cout<<cnt;
    return 0;
}