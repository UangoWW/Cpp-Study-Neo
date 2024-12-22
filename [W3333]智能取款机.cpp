#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int f[10]={100,50,20,10,5,1};
int main(){
    int m,cnt=0;
    cin>>m;
    for(int i=0;i<10;i++){
        if(f[i]>m)continue;
        if(m==0) break;
        else{
            cout<<f[i]<<" "<<m/f[i]<<endl;
            cnt+=(m/f[i]);
            m=m-(m/f[i])*f[i];
        }
    }
    cout<<cnt;
    return 0;
}