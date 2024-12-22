#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int n,m,p,l=1;
int w[201];
int main(){
    int cnt=0;
    cin>>n>>m;
    p=n;
    for(int i=1;i<=n;i++){
        cin>>w[i];
        if(w[i]>m)p-=1;
    }
    sort(w+1,w+n+1);
    while(l<=p){
        if(w[l]+w[p]<=m){
            l++;
            p--;
            cnt++;
        }else if(w[p]<=m){
            p--;
            cnt++;
        }
    }
    
    cout<<cnt<<endl;
    return 0;
}