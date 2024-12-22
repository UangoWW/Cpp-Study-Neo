#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int f[1145];
int main(){
    int n;cin>>n;
    f[0]=1;f[1]=1;f[2]=2;
    for(int i=3;i<=n;i++){
        for(int j=1;j<=i;j++){
            f[i]+=f[j-1]*f[i-j];
        }
    }
    cout<<f[n]<<endl;
    return 0;
}