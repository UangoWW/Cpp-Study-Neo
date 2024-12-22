#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
bool b[1000001];
int p[1000001],cnt;
int main(){
    int n;cin>>n;
    for(int i=2;i<=n;i++){
        if(b[i]==0){p[++cnt]=i;}
            for(int j=1;j<=cnt&&i*p[j]<=n;j+=1){
                b[i*p[j]]=1;
                if(i%p[j]==0) break;
            }
        
    }
    cout<<cnt<<endl;
    return 0;
}