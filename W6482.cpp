#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    int _1,_2,_3,_4,_5,_6;
    
    for(int i=10000;i<=1000000;i++){
            if(i<100000){
                _1=i/10000%10;_2=i/1000%10;_3=i/100%10;
                _4=i/10%10;_5=i%10;
                if(_1==_5&&_2==_4&&_1+_2+_3+_4+_5==n)cout<<i<<endl;
            }
            if(i<1000000){
                _1=i/100000%10;
                _2=i/10000%10;
                _3=i/1000%10;
                _4=i/100%10;
                _5=i/10%10;
                _6=i%10;
                if(_1==_6&&_2==_5&&_3==_4&&_1+_2+_3+_4+_5+_6==n)cout<<i<<endl;
            }
    }
    return 0;
}