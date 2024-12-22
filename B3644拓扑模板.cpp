#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <int> G[105];
queue<int> Q;
int du[105];

int main(){
    int n,q;
    cin>>n;
    for(int i=1;i<=n;i++){
        while(cin>>q){
            if(!q) break;
            G[i].push_back(q);
            du[q]++;
        }
    }
    for(int i=1;i<=n;i++){
        if(du[i]==0)Q.push(i);
    }
    while(!Q.empty()){
        int u=Q.front();Q.pop();
        cout<<u<<" ";
        for(int i=0;i<G[u].size();i++){
            int v=G[u][i];
            if(--du[v]==0)Q.push(v);
        }
    }
    return 0;
}