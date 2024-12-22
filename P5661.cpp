#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <queue>
using namespace std;
typedef long long ll;
struct ticket{
    int pr,tm;
}tic[100007];
int main(){
    int n;
    cin>>n;
    queue <ticket> r;
    int ty,pri,t,sum=0;
    for(int i=0;i<n;i++){
        cin>>ty>>pri>>t;
        if(!ty){
            sum+=pri;
            ticket a;
            a.pr=pri;
            a.tm=t;
            r.push(a);
        }else{
            while(!r.empty()){
                if(t-r.front().tm>45)r.pop();
                else{
                    break;
                }
            }
            queue<ticket> r1;
            sum+=pri;
            while(!r.empty()){
                if(r.front().pr>=pri){
                    r.pop();
                    sum-=pri;
                    break;
                }
                else{
                    r1.push(r.front());
                    r.pop();
                }
            }
            while(!r.empty()){
                r1.push(r.front());
                r.pop();
            }
            r=r1;
        }
    }
    cout<<sum;
    return 0;
}