#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//love19
//02
// bool now[1005];
// bool Mem[1005];
// int head=0,tail=-1;
int main(){
    //01
    // string str,substr;
    // while(cin>>str>>substr){
    //     int maxx=0,pos;
    //     for(int i=0;i<str.size();i++){
    //         if(str[i]-'0'>maxx){
    //             maxx=str[i]-'0';
    //             pos=i;
    //         }
    //     }
    //     for(int i=0;i<str.size();i++){
    //         cout<<str[i];
    //         if(i==pos){
    //             cout<<substr;
    //         }
    //     }
    //     cout<<endl;
    // }

    //02
    // int m,n;cin>>m>>n;
    // int x,len=0,cnt=0;
    // while(n--){
    //     cin>>x;
    //     if(now[x])continue;
    //     if(len==m){
    //         now[Mem[head++]]=false;
    //         Mem[tail++]=x;
    //         now[x]=true;
    //     }
    //     else{
    //         len++;
    //         now[x]=true;
    //         Mem[tail++]=x;
    //     }
    //     cnt++;
    // }
    // cout<<cnt<<endl;

    //03
    int n;cin>>n;
    int a[100001]={},t=1;
    int l1[100001]={},l2[100001]={},l=0;
    stack <int> s;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int i=l;
    int f=0;
    while(1){
        s.push(t);
        l++;
        l1[l]=0;
        l2[l]=t;
        t++;
        while(1){
            if(s.size()==0)break;
            if(a[i]!=s.top())break;
            i++;l++;
            l1[l]=1;
            l2[l]=s.top();
            s.pop();
    }
    if(s.empty()&&t=)
    return 0;
}
