#include <iostream>
using namespace std;
int a[23],n,m; // 深搜枚举 
void dfs(int k) // level
{
	if(k==m+1)
	{
		for(int i=1;i<=m;i++) cout << a[i] << " ";
		cout << endl;
		return;
	}
	for(int i=a[k-1]+1;i<=n;i++)
	{
		a[k]=i;
		dfs(k+1);
	}
}
int main()
{
	cin>>n>>m;
	dfs(1);
	return 0;
}
