#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int main(){
    string s1="0",res;
    int n;cin>>n;
    // for(int i=0;i<n;i++){
    //     res="";
    //     for(int j=0;j<s1.length();j++){
    //         if(s1[j]=='0'){
    //             res+='1';
    //         }else if(s1[j]=='1'){
    //             res+="01";
    //         }
    //     }
    // }
    while(n--){
        res="";
        for(int i=0;i<s1.length();i++){
            if(s1[i]=='0')res+='1';
            else if(s1[i]=='1')res+="01";
        }
        s1=res;
    }
    cout<<s1;
    return 0;
}