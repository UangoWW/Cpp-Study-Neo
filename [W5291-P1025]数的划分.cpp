#include <iostream>
using namespace std;
int a[23],n,m,cnt; // 深搜枚举 
void dfs(int L,int s) // level
{
    if(s>n) return;
	if(L==m+1)
	{
		if(s==n)cnt++;
        return ;
	}
	for(int i=a[L-1];i<=(n-s)/(m-L+1);i++)
	{
		a[L]=i;
		dfs(L+1,s+i);
	}
}
int main()
{
	cin>>n>>m;
    a[0]=1;
	dfs(1,0);
    cout<<cnt;
	return 0;
}
