#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int md=177777779;
int pre[1000002];
int mi[1000002];
string s;
int h(int i,int j){
    return (pre[j]-(ll)pre[i-1]*mi[j-i+1]%md+md)%md;
}
int main(){
    mi[0]=1;
    for(int i=1;i<1000000;i++){
        mi[i]=mi[i-1]*137LL%md;
    }
    while(1){
        cin>>s; if(s==".") break;
        int n=s.length();
        pre[0]=s[0];
        for(int i=1;i<n;i++){
            pre[i]=(pre[i-1]*137LL+s[i])%md;
        }
        for(int len=1;len<=n;len++){if(n%len==0){
                bool flag=1;
                for(int i=len;i<n;i+=len){
                    int j=i+len-1;
                    if(h(i,j)!=pre[len-1]){
                        flag=0;break;
                    }
                }
                if(flag){cout<<n/len<<endl;break;}
            }
        }
    }
    return 0;
}