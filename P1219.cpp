#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int n,cnt=0;
int a[20];
bool lie[20],xie1[40],xie2[40];
void dfs(int hang){
    if(hang==n+1){
        cnt++;
        if(cnt<=3){
            for(int i=1;i<=n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }

        return ;
    }
    for(int i=1;i<=n;i++){
        if(lie[i]==false&&xie1[hang+i]==false&&xie2[hang-i+n]==false)
        {
            a[hang]=i;
            lie[i]=xie1[hang+i]=xie2[hang-i+n]=true;
            dfs(hang+1);
            lie[i]=xie1[hang+i]=xie2[hang-i+n]=false;
        }
    }
}
int main(){
    cin>>n;
    dfs(1);
    cout<<cnt;
    return 0;
}