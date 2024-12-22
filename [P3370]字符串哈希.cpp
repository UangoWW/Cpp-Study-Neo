#include <iostream>
using namespace std;
const int md=1000009;
string a[1000009];
bool insert(string s)
{
	int y=0;
	for(int i=0;i<s.length();i++) y=(y*1777+s[i])%md;
	while(a[y]!=""&&a[y]!=s) y=(y+179)%md;
	if(a[y]==s) return 0;
	a[y]=s;
	return 1;
}
int main()
{
	int n,cnt=0; cin>>n;
	while(n--)
	{
		string s; cin>>s;
		if(insert(s)) cnt++;
	}
	cout << cnt << endl;
	return 0;
}
