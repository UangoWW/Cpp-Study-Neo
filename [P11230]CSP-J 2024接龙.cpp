#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int T,n,k,q;
const int MAXN=2e5+3;
int l[MAXN],xx[MAXN],yy[MAXN],dp[MAXN][105];
vector<int> v[MAXN];
int main(){
	cin >> T;
	while(T--){
		cin >> n >> k >> q;
		int Lmax = 0,Rmax = 0;
		for(int i = 1;i <= n;i++){
			cin >> l[i];
			v[i].clear();
			for(int j = 1;j <= l[i];j++){
				int x;
				cin >> x;
				Lmax = max(Lmax,x);
				v[i].push_back(x);
			}
		}
		for(int i = 1;i <= q;i++){
			cin >> xx[i] >> yy[i];
			Rmax = max(Rmax,xx[i]);
		}
		for(int i = 0;i <= Lmax;i++){
			for(int j = 0;j <= Rmax;j++){
				dp[i][j] = -1;
			}
		}
		dp[1][0] = 0;
		for(int i = 1;i <= Rmax;i++){
			for(int j = 1;j <= n;j++){
				int x = -1;
				for(int kl = 0;kl < v[j].size();kl++){
					int tl = v[j][kl];
					if(kl >= k){
						int t2 = v[j][kl - k];
						if(dp[t2][i - 1] != -1 && dp[t2][i - 1] != j && x == kl - k)x = -1;
					}
					if(x != -1){
						if(dp[tl][i] == -1)dp[tl][i] = j;
						else if(dp[tl][i] != j) dp[tl][i] = 0;
					}
					if(dp[tl][i - 1] != -1 && dp[tl][i - 1] != j)x = kl;
				}
			}
		}
		for(int i = 1;i <= q;i++){
			if(yy[i] > Lmax)cout << "0";
			else cout << (dp[yy[i]][xx[i]] != -1);
			puts("");
		}
	}
	return 0;
}