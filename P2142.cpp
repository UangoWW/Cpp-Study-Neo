#include <iostream>
#include <cstring>
using namespace std;
char a1[11451],b1[11451];
int a2[11451],b2[11451];
int a3[11452];
int main(){
    cin>>a1>>b1;
    int len1=strlen(a1),len2=strlen(b1);
    if(len1<len2||len1==len2&&strcmp(a1,b1)==-1){
        cout<<"-";
        swap(a1,b1);
        swap(len1,len2);
    }
    for(int i=0;i<len1;i++)a2[i]=a1[len1-i-1]-48;
    for(int i=0;i<len2;i++)b2[i]=b1[len2-i-1]-48;
    for(int i=0;i<len1;i++){
        a2[i]-=b2[i];
        if(a2[i]<0){
            a2[i+1]--;
            a2[i]+=10;
        }
    }
    while (a2[len1-1]==0 &&len1>1){
        len1--;
    }
    for(int i=0;i<len1;i++){
        cout<<a2[len1-1-i];
    }
}