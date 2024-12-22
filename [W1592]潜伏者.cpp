#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
string x,y,z;
int ys[30],cnt=0;
bool v1[30],v2[30];
int main(){
    memset(v1,false,sizeof(v1));
    memset(v2,false,sizeof(v2));
    cin>>x>>y>>z;
    for(int i=0;i<x.length();i++){
        if(v1[x[i]-'A'+1]==false&&v2[y[i]-'A'+1]==false){
            ys[x[i]-'A'+1]=y[i];
            v1[x[i]-'A'+1]=true;
            v2[y[i]-'A'+1]=true;
            cnt++;
        }else if(ys[x[i]-'A'+1]!=y[i]){
            cout<<"Failed"<<endl;
            return 0;
        }
    }
    if(cnt!=26){
        cout<<"Failed"<<endl;return 0;
    }
    for(int i=0;i<z.length();i++){
        printf("%c",ys[z[i]-'A'+1]);
    }
    return 0;
    
}