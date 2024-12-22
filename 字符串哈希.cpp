#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int pm=1e9+7;
int haxi(string s){
    ll y=0;
    for(int i=0;i<s.length();i++){
        y=(y*177+s[i])%pm;
    }
    return y;
}
int main(){
    
    return 0;
}