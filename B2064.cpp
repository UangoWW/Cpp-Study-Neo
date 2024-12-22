#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int Feb(int n){
    if(n==1)return 1;
    else if(n==2) return 1;
    return Feb(n-1)+Feb(n-2);
}
int main(){
    int n;
    cin>>n;
    int x;
    while(n){
        cin>>x;
        cout<<Feb(x)<<endl;
        n--;
    }
    return 0;
}