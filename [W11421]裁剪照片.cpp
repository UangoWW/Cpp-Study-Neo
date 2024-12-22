#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;
int main(){
    int n,m;
    cin>>n>>m;
    vector<string> G(n);
    for(int i=0;i<n;i++){
        cin>>G[i];
    }
    int top=0;
    while(top<n&&G[top].find('1')==string::npos){
        top++;
    }
    int bottom=n-1;
    while(bottom>=0&&G[bottom].find('1')==string::npos){
        bottom--;
    }
    int left=0;
    while(left<m){
        bool f=false;
        for(int i=0;i<n;i++){
            if(G[i][left]=='1'){
                f=true;
                break;
            }
        }
        if(f) break;
        left++;
    }
    int right=m-1;
    while(right>=0){
        bool f=false;
        for(int i=0;i<n;i++){
            if(G[i][right]=='1'){
                f=true;
                break;
            }
        }
        if(f) break;
        right--;
    }
    int aa=top+(n-1-bottom);
    int bb=left+(m-1-right);
    int nw=right-left+1;
    int nh=bottom-top+1;
    int cnt=aa*m+bb*n-aa*bb;
    cout<<cnt;
    return 0;
}