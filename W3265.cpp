#include <bits/stdc++.h>
using namespace std;
deque<string> q;
int main() {
    int x,n;
    cin>>n;
    string name;
    for(int i=0;i<n;i++){
        cin>>x;
        cin>>name;
        if(x==0)q.push_front(name);
        else q.push_back(name);
    }
    for(int i=0;i<n;i++){
        cout<<q[i]<<endl;
    }
  return 0;
}