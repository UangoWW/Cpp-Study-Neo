#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    int sum=1;
    for(int i=1;i<n;i++){
        sum++;
        sum*=2;
    }
    cout<<sum;
    return 0;
}