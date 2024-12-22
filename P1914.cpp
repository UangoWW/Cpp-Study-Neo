#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int main(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]=(s[i]-'a'+n)%26+'a';
            
        }
    }
    cout<<s;
    return 0;
}