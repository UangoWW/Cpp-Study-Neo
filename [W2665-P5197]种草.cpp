#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int g[100005];
int main(){
    int a,b,maxg=0;
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>a>>b;
        g[a]++;
        g[b]++;
        maxg=max(g[a],max(g[b],maxg));

    }
    maxg+=1;
    cout<<maxg;
    return 0;
}