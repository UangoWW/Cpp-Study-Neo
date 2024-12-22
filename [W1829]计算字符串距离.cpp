#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string a,b;
	int n;
	cin >> n;
	while(n){
		cin >> a >> b;
		int lena = a.length(),lenb = b.length();
		int dp[lenb + 5][lena + 5];
		dp[0][0] = 0;
		for(int i = 1;i <= lena;i++){
			dp[0][i] = i;
		}
		for(int i = 1;i <= lenb;i++){
			dp[i][0] = i;
		}
		for(int i = 1;i <= lenb;i++){
			for(int j = 1;j <= lena;j++){
				if(a[j - 1] == b[i - 1]){
					dp[i][j] = min(min(dp[i - 1][j] + 1,dp[i][j - 1] + 1),dp[i - 1][j - 1]);
				}else{
					dp[i][j] = min(min(dp[i - 1][j] + 1,dp[i][j - 1] + 1),dp[i - 1][j - 1] + 1);
				}
			}
		}
		cout << dp[lenb][lena] << endl;
		n--;
	}
	return 0;
}