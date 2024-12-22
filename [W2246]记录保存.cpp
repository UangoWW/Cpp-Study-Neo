#include <iostream>
#include <algorithm>
using namespace std;
const int md=1000009;
string a[1000009];
int cnt[1000009];
void insert(string s)
{
	int y=0;
	for(int i=0;i<s.length();i++) y=(y*1777+s[i])%md;
	while(a[y]!=""&&a[y]!=s) y=(y+179)%md;
	a[y]=s;
	cnt[y]++;
}
int main()
{
	int n; cin>>n;
	while(n--)
	{
		string s[3],ss; cin>>s[0]>>s[1]>>s[2];
		sort(s,s+3);
		ss=s[0]+" "+s[1]+" "+s[2];
		insert(ss);
	}
	int maxx=-1;
	for(int i=0;i<md;i++) if(maxx<cnt[i]) maxx=cnt[i];
	cout << maxx << endl;
	return 0;
}
