#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <set>
using namespace std;
typedef long long ll;
const int md=1e6+7;
set<int> S;
int a[1000002],n;
int main(){
    int T;cin>>T;
    while(T--){
        int maxx=0;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1,j=1;i<=n;i++){
            while(j<=n&&S.count(a[j])==0) S.insert(a[j++]); 
            if(maxx<j-i) maxx=j-i;
            S.erase(a[i]);
        }
        cout<<maxx<<endl;
    }
    
    return 0;
}