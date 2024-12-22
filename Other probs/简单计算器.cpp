#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
stack <int> s1;
stack <char> s2;
int main(){
    int n,c;
    cin>>n;
    c=n-1;
    while(n--){
        int x;cin>>x;s1.push(x);
    }
    while(c--){
        char ch;cin>>ch;s2.push(ch);
    }
    int top1=s1.top();s1.pop();
    int top2=s1.top();s1.pop();
    int sum=0;
    while(!s2.empty()){
        if(s2.top()=='+'){
            sum=top1+top2;
            s2.pop();
        }
        else if(s2.top()=='-'){
            sum=top2-top1;
            s2.pop();
        }
        else if(s2.top()=='*'){
            sum=top1*top2;
            s2.pop();
        }
        else if(s2.top()=='/'){
            if(top1==0){printf("ERROR: %d/0\n",top2);return 0;}
            sum=top2/top1;
            s2.pop();
        }
        if(s1.empty()&&s2.empty())break;
        top1=sum;top2=s1.top();s1.pop();
    }
    cout<<sum<<endl;
    return 0;
}