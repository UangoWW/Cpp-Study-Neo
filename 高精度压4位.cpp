#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
struct HPN{
	long long a[20005],len;
	HPN(string s = "0"){
		memset(a,0,sizeof(a));
		len = 0;
		for(int i = s.length() - 1;i >= 0;i -= 4){
			string str;
			if(i >= 3)str = s.substr(i - 3,4);
			else str = s.substr(0,i + 1);
			int y = 0;
			for(int j = 0;j < str.length();j++){
				y = y * 10 + str[j] - '0'; 
			}
			a[++len] = y;
		}
	}
	HPN(int x){
		memset(a,0,sizeof(a));
		a[++len] = x;
		while(a[len] >= 10000){
			a[len + 1] = a[len] / 10000;
			a[len] %= 10000;
			len++;
		}
	}
	int operator [] (int k) const{
		return a[k];
	}
	void show(){
		for(int i = len;i >= 1;i--){
			if(i == len)printf("%d",a[i]);
			else printf("%04d",a[i]);
		}
		printf("\n");
	}
	bool judge_zero(){
		return a[len] == 0;
	}
};
HPN operator + (const HPN& A,const HPN& B){
	HPN C;
	C.len = max(A.len,B.len);
	for(int i = 1;i <= C.len;i++)C.a[i] = A.a[i] + B.a[i];
	for(int i = 1;i <= C.len;i++){
		if(C.a[i] >= 10000){
			C.a[i + 1]++;
			C.a[i] %= 10000;
		}
	}
	if(C.a[C.len + 1] > 0)C.len++;
	return C;
}
HPN operator - (const HPN& A,const HPN& B){
	HPN C;
	C.len = A.len-B.len+1;
    if(C.len<0)
	for(int i = 1;i <= C.len;i++)C.a[i] = A.a[i] - B.a[i];
	for(int i = 1;i <= C.len;i++){
		if(C.a[i] < 0){
			C.a[i + 1]--;
			C.a[i] += 10000;
		}
	}
	while(C.a[C.len] == 0 && C.len > 1)C.len--;
	return C;
}
bool operator < (const HPN& A,const HPN& B){
	if(A.len != B.len)return A.len < B.len;
	for(int i = A.len;i >= 1;i--){
		if(A.a[i] != B.a[i]){
			return A.a[i] < B.a[i];
		}
	}
	return false;
}
bool operator > (const HPN& A,const HPN& B){
	return B < A;
}
bool operator == (const HPN& A,const HPN& B){
	return !(A < B || B < A);
}
HPN operator * (HPN& A,HPN& B){
	if(A.judge_zero() || B.judge_zero())return HPN("0");
	HPN C;
	C.len = A.len + B.len - 1;
	for(int i = 1;i <= A.len;i++){
		for(int j = 1;j <= B.len;j++){
			C.a[i + j - 1] += A.a[i] * B.a[j];
		}
	}
	for(int i = 1;i <= C.len;i++){
		C.a[i + 1] += C.a[i] / 10000;
		C.a[i] %= 10000;
	}
	if(C.a[C.len + 1])C.len++;
	return C;
} 
HPN operator * (HPN A,int x){
	HPN C;
	for(int i = 1;i <= A.len;i++){
		C.a[i] = A.a[i] * x;
	}
	while(C.a[C.len + 1]){
		 C.len++;
		 C.a[C.len] += C.a[C.len] / 10000;
		 C.a[C.len] %= 10000;
	}
	return C;
}
HPN operator / (const HPN& A,int x){
	HPN C;
	C.len = A.len;
	long long y = 0;
	for(int i = A.len;i >= 1;i--){
		y = y * 10000 + A[i];
		C.a[i] = y / x;
		y %= x;
	}
	while(C.a[C.len] == 0 && C.len > 1) C.len--;
	return C;
}
HPN operator / (HPN A,HPN B){
    if(A<B) return HPN("0");
	HPN C;
	C.len = A.len - B.len + 1;
	for(int i = C.len;i >= 1;i--){
		for(;;){
			bool flag = false;
			for(int j = i + B.len;j >= i;j--){
				if(A[j] != B[j - i + 1]){
					flag = (A[j] < B[j - i + 1]);break;
				}
			}
			if(flag)break;
			for(int j = i;j <= i + B.len;j++){
				A.a[j] -= B.a[j - i + 1]; 
			}
			for(int j = i;j <= i + B.len;j++){
				if(A.a[j] < 0){
					A.a[j + 1]--;
					A.a[j] += 10000;
				}
			}
			C.a[i]++;
		}
	}
	while(C.a[C.len] == 0 && C.len > 1)C.len--;
	return C;
}
HPN operator % (HPN A,HPN B){
	HPN C,tmp,tmp2;
	tmp = A / B;
	tmp2 = tmp * B;
	C = A - tmp2;
	return C;
}
int main(){
	string s1,s2;
	cin >> s1 >> s2;
	HPN A(s1),B(s2),C;
    C=A/B;C.show();cout<<endl;
    
	return 0;
}