#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
const int N=5e6+5;
int n,x,a[N];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    cin>>x;
    int L=1,R=n,mid;
    while(L<=R){
        mid=(L+R)/2;
        if(x==a[mid]){
            cout<<mid<<endl;
            return 0;
        }
        else if(x<a[mid]) R=mid-1;
        else L=mid+1;
    }
    cout<<-1<<endl;
    return 0;
}