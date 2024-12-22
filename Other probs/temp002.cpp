#include <bits/stdc++.h>
using namespace std;
class charc{
    public:
        string name;
        unsigned int MAXHP;
        unsigned int HP;
};
class mtest{
    public:
        charc urchar;
};
mtest game;
void save(){
    FILE * out=fopen("fstest.txt","w");
    fprintf(out,"%s\n",game.urchar.name);
    fprintf(out,"%n\n%n\n",game.urchar.HP,game.urchar.MAXHP);
}
void read(){
    ifstream in("fstest.txt");
    in>>game.urchar.name>>game.urchar.HP>>game.urchar.MAXHP;
    in.close();
}
int main(){
    string name;int hp,maxhp;
    cin>>name>>hp>>maxhp;
    
}