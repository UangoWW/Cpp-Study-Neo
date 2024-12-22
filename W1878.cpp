#include <bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>,greater<int> > q;//每次出去最小的
typedef long long ll;
int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        q.push(x);
    }
    int ans=0;
    while(q.size()>1){
        int a1=q.top();q.pop();
        int a2=q.top();q.pop();
        ans+=(a1+a2);
        q.push(a1+a2);
    }
    cout<<ans;
    return 0;
}