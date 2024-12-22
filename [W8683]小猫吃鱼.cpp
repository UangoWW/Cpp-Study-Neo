#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int main(){
    int n;
    int vl,pr,sum=0,min=999999;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>vl>>pr;
        if(min>vl)min=vl;
        sum+=min;
        min+=pr;
    }
    cout<<sum;
    return 0;
}