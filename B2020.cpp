#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int candy[7],eaten=0;
int main(){
    /*
    [1] [2] [3] [4] [5]
     a   b   c   d   e
     [1]->[5] [1]->[2] 2->1 2->3 3->2 ...
    */
    for(int i=1;i<=5;i++){
        cin>>candy[i];
    }
    for(int i=1;i<=5;i++){
        int pile=candy[i]/3;
        if(i==1)candy[5]+=pile;
        else candy[i-1]+=pile;
        if(i==5)candy[1]+=pile;
        else candy[i+1]+=pile;
        eaten+=candy[i]-pile*3;
        candy[i]=pile;
    }
    for(int i=1;i<=5;i++)cout<<candy[i]<<" ";
    cout<<endl;
    cout<<eaten<<endl;

    return 0;
}