#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int maxn=2e6+2;
int a[maxn];

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }    
    while(m--){
        int x;
        cin>>x;
        cout<<a[x-1]<<endl;
    }
    return 0;
}