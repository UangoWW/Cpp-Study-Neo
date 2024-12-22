#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;
typedef long long ll;
struct node{
    int val;
    int next;
}a[100005];
int vis[100005];
vector<int> li1,li2;//去:list 1 删:list 2
int main(){
    int L,N;
    cin>>L>>N;
    for(int i=0;i<N;i++){
        int kk;cin>>kk;
        cin>>a[kk].val>>a[kk].next;
    }
    for(int i=L;i!=-1;i=a[i].next){
        if(vis[abs(a[i].val)])li2.push_back(i);
        else {li1.push_back(i),vis[abs(a[i].val)]=1;}
    }
    int len1=li1.size(),len2=li2.size();
    for(int i=0;i<len1-1;i++){
        printf("%05d %d %05d\n",li1[i],a[li1[i]].val,li1[i+1]);
    }
    if(len1>=1)printf("%05d %d -1\n",li1[len1-1],a[li1[len1-1]].val);
    for(int i=0;i<len2-1;i++){
        printf("%05d %d %05d\n",li2[i],a[li2[i]].val,li2[i+1]);
    }
    if(len2>=1)printf("%05d %d -1\n",li2[len2-1],a[li2[len2-1]].val);
    return 0;
}