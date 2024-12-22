#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int main(){
    int n,a[101]={};
    int res[101]={};
    cin>>n;
    int b=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]) continue;
        else{
            res[b++]=a[i];
        }
    }
    cout<<b<<endl;
    for(int i=0;i<b;i++) cout<<res[i]<<" ";
    return 0;
}