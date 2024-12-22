#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
struct man{
    string name;
    string sex;
    int A;
}m[3005];
int cl(int s){
    int digit[10]={};
    int k;
    while(s){
        d[s%10]=1;
        s/=10;
    }
    int cnt=0;
    for(int i=0;i<10;i++){
        if(d[i]>0)cnt++;
    }
    return cnt;
}
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>m[i].name>>m[i].sex>>m[i].A;
    }
    int id1=0,id2=0,luck=0,sum=0;
    for(int i=0;i<n;i++) if(m[i].sex=='M')
        for(int j=0;j<n;j++) if(m[i].sex=='F')
        {
            int s=m[i].A+m[j].A;
            int t=cl(s);
            if(luck<t||luck==t&&sum<s||sum==s&&m[id1].A<m[id2].A){
                id1=i;id2=j;luck=t;sum=s;
            }
        }
    cout<<m[id1].name<<' '<<m[id2].name<<endl;
    return 0;
}