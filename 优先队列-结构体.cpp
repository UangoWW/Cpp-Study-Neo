#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <queue>
using namespace std;
typedef long long ll;
struct STU{
    string name; int score;
    STU(string s="",int x=0){
        name=s;score=x;
    }
    bool operator < (STU b) const{
        if(score!=b.score) return score>b.score;
        else return name<b.name;
    }
};
priority_queue<STU> Q;
int main(){
    Q.push(STU("CHARA",88));
    Q.push(STU("FRISK",80));
    Q.push(STU("KRIS",88));
    Q.pop();
    STU p=Q.top();
    cout<<p.name<<endl;
    return 0;
}