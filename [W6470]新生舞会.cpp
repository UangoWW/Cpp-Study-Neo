#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Student{
    char name[20];
    char id[20];
    char sex;
}st[1099];
int m,n;
int checkid(char num[]){
    for(int i=0;i<n;i++){
        if(strcmp(num,st[i].id)==0){
            if(st[i].sex == 'M') return 1;
            else return 0;
        }
    }
}
int checknm(char name[]){
    for(int i=0;i<n;i++){
        if(strcmp(name,st[i].name)==0){
            if(st[i].sex == 'M') return 1;
            else return 0;
        }
    }
}


int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        
        cin>>st[i].name>>st[i].id>>st[i].sex;
    }
    cin>>m;
    char x[20],y[20];
    
    for(int i=0;i<m;i++){
        cin>>x>>y;

        int res1,res2;
        if(x[0]<=57){
            res1 = checkid(x);
        }else{
            res1 = checknm(x);
        }

        if(y[0]<=57){
            res2 = checkid(y);
        }else{
            res2 = checknm(y);
        }
        if(res1 != res2) cout<<"Y"<<endl;
        else cout<<"N"<<endl;
    }
    return 0;
}