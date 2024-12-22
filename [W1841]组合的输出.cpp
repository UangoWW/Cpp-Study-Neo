#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
typedef long long ll;
int a[30],m,n;
void C(int u,int v){
    if(u==n+1){
        for(int i=1;i<=n-1;i++){
            printf("  %d",a[i]);
            
        }
        printf("  %d\n",a[n]);
        return ;
    }
    for(int i=v+1;i<=m;i++){
        a[u]=i;
        C(u+1,i);
    }
}
int main(){
    cin>>m>>n;
    C(1,0);
    return 0;
}