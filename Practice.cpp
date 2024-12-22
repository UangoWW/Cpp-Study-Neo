#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int szN=1002;
const int szM=1004;
int en=0,fst[szN],nex[szM];
struct aaa{
    int start;
    int end;
}e[2004];
int m,n,fi[102],nex[1002*2];
int main(){
    int u,v;
    cin>>n>>m;    
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        en++;e[en].u=u;e[en].v=v;
        nex[en]=fst[u];fst[u]=en;
        en++;e[en].u=v;e[en].v=u;
        nex[en]=fst[v];fst[v]=en;
    }

    return 0;
}