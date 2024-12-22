#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int n,cnt = 0;
	int vis[105];
	string tmp;
	cin >> n;
	string str[105];
	for(int i = 1;i <= n;i++){
		cin >> str[i];
	}
	sort(str + 1,str + n + 1);
	for(int i = 1;i <= n;i++){
		if(str[i] != str[i - 1])cnt++;
	}
	cout << 52-cnt;
	return 0;
}