#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
void f(string str){
    cout<<str<<endl;
    while(next_permutation(str.begin(),str.end())){
        cout<<str<<endl;
    }
}
int main(){
    string s;
    cin>>s;
    f(s);
    return 0;
}