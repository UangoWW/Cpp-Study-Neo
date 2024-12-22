#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <queue>
using namespace std;
typedef long long ll;
queue<int> Q;
int step[10000002];
bool vis[10000002];
int func(int u,int k){
    if(k==0) return u+1;
    if(k==1) return u-1;
    if(k==2) return u*2;
}
int main(){
    memset(step,-1,sizeof(step));
    int S=1,n;cin>>n;
    Q.push(S);
    step[S]=0;
    //vis[S]=true;
    while(!Q.empty()&&step[n]==-1){
        int u=Q.front(); Q.pop();
        for(int i=0;i<3;i++){
            int v=func(u,i);
            if(v<1||v>n) continue;
            if(step[v]==-1){
                Q.push(v);
                step[v]=step[u]+1;
               
            }
        }
    }
    cout<<step[n]<<endl;
    return 0;
}