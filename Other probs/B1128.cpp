#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
string a,b;
int main(){
    cin>>a;//1
    cin>>b;//2
    int c=b.find(a);
    int d=a.find(b);
    if(c!=-1)cout<<a<<" is substring of "<<b<<endl;
    else if(d!=-1)cout<<b<<" is substring of "<<a<<endl;
    else cout<<"No substring";
    
    return 0;
}