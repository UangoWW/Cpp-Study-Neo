#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
string str;

int main(){
    cin>>str;
    int len=str.length();
    int xz;cin>>xz;
    string newstr=str;
    for(int i=0;i<len;i++){
        int newi=(i+xz)%len;
        newstr[newi]=str[i];
    }    
    cout<<newstr;
    return 0;
}