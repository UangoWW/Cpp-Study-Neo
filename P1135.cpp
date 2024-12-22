#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <queue>
using namespace std;
typedef long long ll;
int n,a,b;
int c[201];
int step[202];
queue<int> Q;
int main(){
    memset(step,-1,sizeof(step));
    cin>>n>>a>>b;
    int x;
    for(int i=1;i<=n;i++){
        cin>>c[i];
    }
    Q.push(a);
    step[a]=0;
    while(!Q.empty()&&step[b]==-1){
        int u=Q.front();
        Q.pop();
        int d=u+c[u];
        if(d<=n&&step[d]==-1){
            Q.push(d);
            step[d]=step[u]+1;
        }
        int e=u-c[u];
        if(e>=1&&step[e]==-1){
            Q.push(e);
            step[e]=step[u]+1;
        }
    }
    cout<<step[b];
    return 0;
}