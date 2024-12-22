#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int g[12][12];
int main(){
    int n,m;cin>>n>>m;
    int cd=0,rd=0,d=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>g[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        if(g[m][i]==1)cd++;
        else if(g[i][m]==1) rd++;
    }
    cout<<cd<<" "<<rd<<" "<<cd+rd;    
    return 0;
}