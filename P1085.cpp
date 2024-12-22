#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
struct day
{
    int st,et;
}Day[10];

int main(){
    int maxd=0,dday;
    for(int i=1;i<=7;i++){
        cin>>Day[i].st>>Day[i].et;
        int sum=Day[i].st+Day[i].et;
        if((sum>maxd)&&(sum>8)){
            maxd=sum;
            dday=i;
        }
    }
    cout<<dday;
    return 0;
}