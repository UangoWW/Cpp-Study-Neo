#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef long long ll;
int a[1000002];
void qsort(int l,int r){
    if(l>r)return;
    swap(a[l],a[rand()%(r-l+1)+l]);
    int i=l,j=r;
    while(i<j){
        if(i<j&&a[i]<=a[j])j--;
        swap(a[i],a[j]);
        if(i<j&&a[i]<=a[j])i++;
        swap(a[i],a[j]);
    }
    qsort(l,i-1);
    qsort(i+1,r);
}
int main(){
    srand(time(NULL));
    int n; cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    qsort(1,n);
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    return 0;
}