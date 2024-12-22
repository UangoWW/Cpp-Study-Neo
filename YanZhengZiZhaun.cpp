#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
string s1,s2;
bool check(int p){
    for(int i=0;i<s2.length();i++){
        if(s1[p+i]!=s2[i]) return false;

    }
    return true;

}
int main(){
    cin>>s1>>s2;
    if(s1.length()<s2.length())swap(s1,s2);
    for(int i=0;i<s1.length();i++){
        if(check(i)){
            cout<<s2<<" is substring of "<<s1<<endl;
            return 0;
        }
    }
    cout<<"No substring";
    return 0;
}