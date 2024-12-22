#include <iostream>
#include <cstdio>
using namespace std;
int a[23],n,m,cnt; // 深搜枚举 
void dfs(int L,int s) // level
{
    if(s==n){
        if(L==2)return;
        cout<<n<<"="<<a[1];
        for(int i=2;i<L;i++){
            cout<<"+"<<a[i];
        }
        cout<<endl;
        return;
    }	
	for(int i=a[L-1];i<=n-s;i++)
	{
		a[L]=i;
		dfs(L+1,s+i);
	}
}
int main()
{
	cin>>n;
    a[0]=1;
	dfs(1,0);
    
	return 0;
}
