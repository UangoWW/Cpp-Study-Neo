#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
bool h[10000007];
const int pm=1e9+7;
int haxi(string s){
    ll y=0;
    for(int i=0;i<s.length();i++){
        y=(y*177+s[i])%pm;
    }
    return y;
}
int main(){
    int n;cin>>n;
    string s;getline(cin,s);
    while(n--){
        getline(cin,s);
        if(s[0]=='a')
        {
            h[haxi(s.substr(4))]=1;
        }else{
            if(h[haxi(s.substr(5))]) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
    }
    return 0;
}