#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
char g[102][102];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>g[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(g[i][j]=='?'){
                int cnt=0;
                for(int dx=-1;dx<=1;dx++)
                    for(int dy=-1;dy<=1;dy++)
                        if(g[i+dx][j+dy]=='*')cnt++;
                
            g[i][j]='0'+cnt;
        }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<g[i][j];
        }
        cout<<endl;
    }
    return 0;
}