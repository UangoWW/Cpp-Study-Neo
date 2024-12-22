#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;
typedef long long ll;
int n,a[1000005],k;
void quick_sort(int L,int R,int k){
    if(L>=R) return;
    swap(a[L],a[rand()%(R-L+1)+L]);
    int i=L,j=R;
    while(i<j){
        while(i<j&&a[i]>=a[j]) j--;
        if(i<j) swap(a[i],a[j]);
        while(i<j&&a[i]>=a[j]) i++;
        if(i<j) swap(a[i],a[j]);
    }
    if(k<i) quick_sort(L,i-1,k);
    if(k>i) quick_sort(i+1,R,k);
    return ;
}
int main(){
    srand(time(NULL));
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i];
    quick_sort(1,n,k);
    cout<<a[k];
    return 0;
}