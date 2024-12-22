#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
char a1[3005]={},b1[3005]={};
int a2[3005]={},b2[3005]={},c2[3005]={};
int main(){
    
	cin>>a1>>b1;
	int len1=strlen(a1),len2=strlen(b1);
	int len3=len1+len2;
    if(a1[0]=='0'||a2[0]=='0'){
        cout<<0;
        return 0;
    }
	if(len1>len2){
		swap(len1,len2);
		swap(a1,b1);
	} 
	for(int i=0;i<len1;i++)a2[i]=a1[len1-i-1]-48;
	for(int i=0;i<len2;i++)b2[i]=b1[len2-i-1]-48;
	for(int i=0;i<len1;i++){
		int x=0;
		for(int j=0;j<=len2;j++){
			c2[i+j]=a2[i]*b2[j]+x+c2[i+j];
			x=c2[i+j]/10;
			c2[i+j]%=10;
		}
	}
	while(c2[len3]==0&&len3>1)len3--;
	for(int i=0;i<=len3;i++)cout<<c2[len3-i];
    return 0;
}