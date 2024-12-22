#include <iostream>
using namespace std;
const int sz=202;
int a[sz],dp[sz][sz],pre[sz];
int Sum(int L,int R){ return pre[R]-pre[L-1]; }
int main()
{
	int n; cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) a[i+n]=a[i];
	for(int i=1;i<=2*n;i++) pre[i]=pre[i-1]+a[i];

	int ans=2e9;
	for(int len=1;len<=n;len++) // len表示区间长度 
	{
		for(int i=1;i+len-1<=2*n;i++) // i表示区间左端点 
		{
			int j=i+len-1; // j表示区间右端点
			if(i==j){dp[i][j]=0; continue;} 
			dp[i][j]=2e9;
			for(int k=i;k<j;k++) // [i,j]合并的最后一步是合并[i,k]和[k+1,j] 
			{
				dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+Sum(i,j));
			}
			if(len==n) ans=min(ans,dp[i][j]);
		}
	}
	cout << ans << endl;

	ans=0;
	for(int len=1;len<=n;len++) // len表示区间长度 
	{
		for(int i=1;i+len-1<=2*n;i++) // i表示区间左端点 
		{
			int j=i+len-1; // j表示区间右端点
			if(i==j){dp[i][j]=0; continue;} 
			dp[i][j]=0;
			for(int k=i;k<j;k++) // [i,j]合并的最后一步是合并[i,k]和[k+1,j] 
			{
				dp[i][j]=max(dp[i][j],dp[i][k]+dp[k+1][j]+Sum(i,j));
			}
			if(len==n) ans=max(ans,dp[i][j]);
		}
	}
	cout << ans << endl;
	return 0;
}
