#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <queue>
using namespace std;
typedef long long ll;
int main(){
    queue<char> q;
    char x;
    for(int i=1;i<=8;i++){
        cin>>x;
        q.push(x);
    }
    queue<char> pwd;
    while(!q.empty()){
        char fst=q.front();
        pwd.push(fst);
        q.pop();
        char snd=q.front();
        q.pop();q.push(snd);
    }
    while(!pwd.empty()){
        cout<<pwd.front();
        pwd.pop();
    }
    return 0;
}