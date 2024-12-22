#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int check(string tr){
    int q,Q,n,f;//小大符数
    q=Q=n=f=0;
    if(tr.length()>12) return 0;
    for(int i=0;i<tr.length();i++){
        if(tr[i]>='a'&&tr[i]<='z'){
            q=1;
        }else if(tr[i]>='A'&&tr[i]<='Z'){
            Q=1;
        }else if(tr[i]>='0'&&tr[i]<='9'){
            n=1;
        }else if(tr[i]=='!'||tr[i]=='@'||tr[i]=='#'||tr[i]=='$'){
            f=1; 
        }else return 0;
    }
    if(!f) return 0;
    if(q+Q+n<2) return 0;
    return 1;
}
int main(){
    string s,tr="";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]!=','){
            tr+=s[i];
        }else{
            if(check(tr)){
                cout<<tr<<endl;
            }
            tr="";
        }
    }
    return 0;
}