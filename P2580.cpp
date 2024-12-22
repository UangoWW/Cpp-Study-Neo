#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <set>
using namespace std;
typedef long long ll;
set<string> S;
set<string> s;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        string x;
        cin>>x;
        S.insert(x);
    }
    int m;cin>>m;
    for(int i=1;i<=m;i++){
        string str;cin>>str;
        
        if(S.count(str)==0) cout<<"WRONG"<<endl;
        else if(s.count(str)==1)cout<<"REPEAT"<<endl;
        else {s.insert(str),cout<<"OK"<<endl;}
    }
    return 0;
}