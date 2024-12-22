#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;
typedef long long ll;
int n,a[100005];
void quick_sort(int L,int R){
    if(L>=R) return;
    swap(a[L],a[rand()%(R-L+1)+L]);
    int i=L,j=R;
    while(i<j){
        while(i<j&&a[i]<=a[j]) j--;
        if(i<j) swap(a[i],a[j]);
        while(i<j&&a[i]<=a[j]) i++;
        if(i<j) swap(a[i],a[j]);
    }
    quick_sort(L,i-1);
    quick_sort(i+1,R);
}
int main(){
    srand(time(NULL));
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    quick_sort(1,n);
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    return 0;
}