#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[10005];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    int low=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]&&a[i]!=low){
            ans++;
            low=a[i];
        }

    }
    cout<<ans<<endl;
    return 0;
}