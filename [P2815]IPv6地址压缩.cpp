#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int num[10];
int zeros(){
    int p=-1,mx=0;
    for(int i=1;i<=8;i++){
        if(num[i]==0){
            int j=i;
            while(j+1<8&&num[j+1]==0) j++;
            if(mx<j-i+1){p=i;mx=j-i+1;}
        }
    }
    return p;
}
int main(){
    string s;cin>>s;
    scanf(s.c_str(),"%x:%x:%x:%x:%x:%x:%x:%x",&num[1],&num[2],&num[3],&num[4],&num[5],&num[6],&num[7],&num[8]);
    int p=zeros();
    int skip=0;
    bool flag=true;
    for(int i=1;i<=8;i++){
        if(skip==1){
            if(num[i]==0) continue;
            else skip=2;
        }if(num[i]==0&&i==p){
            skip=1;
            printf("::");
            flag=true;continue;
        }
        if(flag){
            flag=false;
        }
        else printf(":");
        printf("%x",num[i]);
    }
    return 0;
}