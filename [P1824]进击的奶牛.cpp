#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[100005],n,c;
bool check(int d){
    int last=a[1],num=1;
    for(int i=2;i<=n;i++){
        if(a[i]-last>=d){
            num++;
            last=a[i];
            if(num>=c) return 1;
        }
    }
    return 0;
}
int main(){
    cin>>n>>c;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    int low=1,high=a[n]+1;
    while(low+1<high){
        int mid=(low+high)/2;
        if(check(mid)) low=mid;
        else high=mid;
    }
    return 0;
}