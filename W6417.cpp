#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    ll l,r,ans=0; cin>>l>>r;
    for(int len =3;len<=17;len++)
        for(int x=0;x<=9;x++)
            for(int y=0;y<=9;y++)if(y!=x)
                for(int k=0;k<len;k++){
                    if(x==0&&k==0)continue;
                    if(y==0&&k!=0)continue;
                    vector<int> a;
                    a.resize(len,y);
                    a[k]=x;
                    ll s=0;
                    for(int i=0;i<len;i++){
                        s=s*10+a[i];
                    }
                    if(s>=l&&s<=r) ans++;
                }
        
    cout<<ans<<endl;
    return 0;
}