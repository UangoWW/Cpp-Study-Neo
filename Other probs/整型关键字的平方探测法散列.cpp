#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int num[1005];
bool prime(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}//返回true表示是素数
int ins(int num){
    while(!prime(num)) num++;
    return num;
}
void store(pair<int,int> hx[],int m,int n){
    for(int i=0;i<n;i++){
        int key=hx[i].second%m;
        int pos=key;
        int j;
        for(j=1;hx[i].first!=-1;j++){
            pos=(key+j*j)%m;
            if(j==m)break;
        }
        if(j==m){
            if(i==0) cout<<"-";
            else cout<<" -";
        }else{
            if(i==0)cout<<key;
            else cout<<" "<<key;
        }
        hx[i].first=pos;

    }
}
int main(){
    int m,n; cin>>m>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    m=ins(m);
    pair<int,int> hx[n];
    for(int i=0;i<n;i++){
        hx[i].first=-1;
        hx[i].second=num[i];
    }
    store(hx,m,n);
    return 0;
}