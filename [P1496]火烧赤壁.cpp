#include <iostream>
#include <algorithm>
using namespace std;
int n,a[20002],b[20002]; // 原始数据 
int lsh[400002],m=0,mm; // 离散化 
int d[40002],pre[40002];
int main()
{
	int n; cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		lsh[++m]=a[i]; lsh[++m]=b[i];
	}
	sort(lsh+1,lsh+m+1); // 排序 
	mm=unique(lsh+1,lsh+m+1)-lsh-1; // 去重 
	for(int i=1;i<=n;i++)
	{
		a[i]=lower_bound(lsh+1,lsh+mm+1,a[i])-lsh;
		b[i]=lower_bound(lsh+1,lsh+mm+1,b[i])-lsh;
	} // 重标号 
	/*========分割线=========*/
	for(int i=1;i<=n;i++)
	{
		d[a[i]]++; d[b[i]]--; 
	}
	int sum=0;
	for(int i=1;i<=mm;i++)
	{
		pre[i]=pre[i-1]+d[i];
		if(pre[i]>0) sum+=lsh[i+1]-lsh[i];
	}
	cout << sum << endl;
	return 0;
}
