#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
typedef long long ll;
int g[50][50];
int op=0,fxy[4][2]={{0,1},{1,0},{0,-1},{-1,0}},x=1,y=1;
int n;
bool check(int x ,int y){
    if(x>=1&&x<=n&&y>=1&&y<=n&&!g[x][y]) return true;
    return false;
}
int main(){
    cin>>n;
    for(int i=1;i<=n*n;i++){
        g[x][y]=i;
        if(!check(x+fxy[op][0],y+fxy[op][1])) op=(op+1)%4;
        x+=fxy[op][0];
        y+=fxy[op][1];
    }
    for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<setw(3)<<g[i][j];
		}
		cout<<endl;
	}
    return 0;
}