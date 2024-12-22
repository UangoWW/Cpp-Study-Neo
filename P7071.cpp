#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;
typedef long long ll;
int a[100]={0,1};
int main(){
    int n;
    cin>>n;
    if(n%2!=0){
        cout<<-1;
        return 0;
    }
    for(int i=2;i<=28;i++){
        a[i]=a[i-1]*2;
    }
    for(int i=27;i>0;i--){
        if(n>=a[i]){
            n-=a[i];
            cout<<a[i]<<" ";
        }
    }
    return 0;
}