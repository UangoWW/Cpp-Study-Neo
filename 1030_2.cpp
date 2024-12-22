#include <iostream>
#include <cstring>
using namespace std;
struct node{int lson,rson;}a[200];
char s1[102],s2[102];
int dfs(int L, int R,int x,int y){
    if(L>R||x>y)return 0;
    int u=s2[y];
    int i;
    for(i=L;i<=R;i++){
        if(u==s1[i])break;
    }
    int cnt=i-L;
    a[u].lson=dfs(L,i-1,x,x+cnt-1);
    a[u].rson=dfs(i+1,R,x+cnt,y-1);
    return u;
}
void xianxu(int u){
   if(!u)return;
   cout<<char(u);
   xianxu(a[u].lson);
   xianxu(a[u].rson);
}
int main(){
    cin>>s1>>s2;
    int root=dfs(0,strlen(s1)-1,0,strlen(s2)-1);
    xianxu(root);
}