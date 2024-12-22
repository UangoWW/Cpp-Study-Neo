#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <queue>
using namespace std;
typedef long long ll;
priority_queue<int,vector<int>,greater<int> > Q;
int main(){
    int n;
    cin>>n;
    while(n--){
        int op;
        cin>>op;
        if(op==1){
            int a;cin>>a;
            Q.push(a);
        }else if(op==2){
            cout<<Q.top()<<endl;
        }else if(op==3){
            Q.pop();
        }
    }
    
    return 0;
}