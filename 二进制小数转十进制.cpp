#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
    string s;
    double ans=0;
    cin>>s;
    int p=s.find("."),k;
    for(int i=0;i<p;i++){
        ans=ans*2+s[i]-'0';
    }
    for(int i=p+1,k=-1;i<s.length();i++,k--){
        ans+=(s[i]-'0')*pow(2,k);
    }
    cout<<ans;


    
    return 0;
}