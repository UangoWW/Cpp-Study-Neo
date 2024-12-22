#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
string s1,s2;
struct node{
    char val;
    int lson,rson;
}a[102];
int cnt=0;
int dfs(int L1,int R1,int L2,int R2){
    if(L1>R1||L2>R2) return 0;
    //char c=s1[L1];
    //P1030 
    char c=s1[R1];
    int nd=++cnt;
    a[nd].val=c;
    int p=s2.find(c);
    int lenl=p-L2;
    int lenr=R2-p;
    //a[nd].lson=dfs(L1+1,L1+lenl,L2,p-1);
    //P1030写法:
    a[nd].lson=dfs(L1,L1+lenl-1,L2,p-1);
    //a[nd].rson=dfs(L1+lenl+1,R1,p+1,R2);
    //P1030
    a[nd].rson=dfs(L1+lenl,R1-1,p+1,R2);
    return nd;
}
void aaa(int u){
    
    if(u==0) return;
    cout<<a[u].val;
    aaa(a[u].lson);
    aaa(a[u].rson);
    
}
int main(){
    cin>>s2>>s1;
    //P1030

    int root=dfs(0,s1.length()-1,0,s2.length()-1);
   
    aaa(root);

    return 0;
}