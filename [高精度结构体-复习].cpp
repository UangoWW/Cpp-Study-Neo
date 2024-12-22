#include <iostream>
#include <cstring>
using namespace std;
struct HPN{ // HighPrecisonNumber
	int a[4088],len;
	HPN(string s="0")
	{
		memset(a,0,sizeof(a));
		len=s.length();
		for(int i=1;i<=len;i++) a[i]=s[len-i]-'0';
	}
    HPN(int x)
    {
        memset(a,0,sizeof(a));
        while(x){
            a[++len]=x%10;
            x/=10;
        }if(len==0)len++;
    }
	void show()
	{
		for(int i=len;i>=1;i--) cout << a[i];
	}
	bool zero(){ return a[len]==0;}
};
HPN operator + (HPN A,HPN B)
{
	HPN C; C.len=max(A.len,B.len);
	for(int i=1;i<=C.len;i++) C.a[i]=A.a[i]+B.a[i];
	for(int i=1;i<=C.len;i++)
	{
		if(C.a[i]>=10)
		{
			C.a[i+1]++;
			C.a[i]-=10;
		}
	}
	if(C.a[C.len+1]>0) C.len++;
	return C;
}
HPN operator - (HPN A,HPN B) // 保证A>=B 
{
	HPN C; C.len=A.len;
	for(int i=1;i<=C.len;i++) C.a[i]=A.a[i]-B.a[i];
	for(int i=1;i<=C.len;i++)
	{
		if(C.a[i]<0)
		{
			C.a[i+1]--;
			C.a[i]+=10;
		}
	}
	while(C.a[C.len]==0&&C.len>1) C.len--;
	return C;
}
bool operator < (HPN A,HPN B) 
{
	if(A.len!=B.len) return A.len<B.len; 
	for(int i=1;i<=A.len;i++){
		if(A.a[i]!=B.a[i]) return A.a[i]<B.a[i];
	}
	return false;
}
bool operator > (HPN A,HPN B) 
{
	return B<A;
}
bool operator == (HPN A,HPN B) 
{
	return !(A<B||B<A);
}
HPN operator * (HPN A,HPN B)
{
	if(A==HPN("0")||B==HPN("0")) return HPN("0");
	HPN C;
	C.len=A.len+B.len-1;
	for(int i=1;i<=A.len;i++)
		for(int j=1;j<=B.len;j++)
			C.a[i+j-1]+=A.a[i]*B.a[j];
	for(int i=1;i<=C.len;i++)
	{
		C.a[i+1]+=C.a[i]/10;
		C.a[i]%=10;
	}
	if(C.a[C.len+1]) C.len++;
	return C;
}

int main() // 洛谷P1303 
{
	string s1,s2; cin>>s1>>s2; 
	HPN A(s1),B(s2),C;
	C=A*B;
	C.show(); 
	return 0;
}

