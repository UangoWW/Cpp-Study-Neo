#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int main(){
    int x,L=1,R=1;
    int sum=1;
    cin>>x;
    while(L<x){
        while(sum<x){
            R++;
            sum+=R;
        }
        if(sum==x){
            cout<<L<<" "<<R<<endl;
        }
        sum-=L;
        L++;
    }
    return 0;
}