#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int n,a[150005],b[150005];
void msort(int L,int R){
    if(L>=R) return ;
    int mid=(L+R)/2;
    msort(L,mid);
    msort(mid+1,R);
    int i=L,j=mid+1;
    for(int k=L;k<=R;k++){
        if(i<=mid&&j<=R){
            if(a[i]<=a[j])b[k]=a[i++];
            else b[k]=a[j++];
        }
        else if(i<=mid) b[k]=a[i++];
        else b[k]=a[j++];
    }
    for(int k=L;k<=R;k++) a[k]=b[k];
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    msort(1,n);
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    return 0;
}