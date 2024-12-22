#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <stack>
using namespace std;
typedef long long ll;
stack<int> s;
int main(){
    int n,k=0;cin>>n;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        while(k<x){
            s.push(++k);
        }
        if(s.top()!=x){
            cout<<"NO";
            return 0;
        }
        s.pop();
    }
     cout<<"YES";
    return 0;
}