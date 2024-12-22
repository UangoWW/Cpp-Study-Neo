#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[100007];
int buc[610];
int main(){
    int n,w;
    cin>>n>>w;
    int k=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        buc[a[i]]++;
        int nmax=max(a[i],k);
        int jh=max(1,i*w/100);
        for(int j=607;j>=0;j--){
            jh=jh-buc[j];
            if(jh<=0){
                k=j;
                break;
            }
        }
        cout<<k<<" ";
    }

    return 0;
}