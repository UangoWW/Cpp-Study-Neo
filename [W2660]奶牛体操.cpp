#include<iostream>
#include<cstring>
using namespace std;
int k,n,a[25],cnt = 0;
int vis[25][25];
int main(){
	memset(vis,-1,sizeof(vis));
	cin >> k >> n;
	for(int i = 0;i < k;i++){
		for(int j = 1;j <= n;j++){
			cin >> a[j];
		}
		for(int j = 1;j <= n;j++){
			vis[a[j]][a[j]] = 0;
		}
		for(int j = 1;j <= n;j++){
			for(int k = j + 1;k <= n;k++){
				vis[a[k]][a[j]] = 0;
			}
		}
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			if(vis[i][j]){
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}