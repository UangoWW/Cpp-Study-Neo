#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[1005],b[1005];
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=m;i++){
        cin>>b[i];
    }
    sort(a+1,a+n+1,cmp);
    sort(b+1,b+m+1,cmp);
    if(a[n]<b[m])cout<<"hahaha"<<endl;
    else {
        int pm=0;
        for(int i=1;i<=m;i++){
            if(a[n-2]>=b[i]&&a[n]<b[i-1]){
                pm=i+1;
                break;
            }
        }
        cout<<pm-1<<endl;
    }
    return 0;
}