#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;
struct HPN{ // HighPrecisonNumber
	int a[2000],len;
	HPN(string s="0")
	{
		memset(a,0,sizeof(a));
		len=s.length();
		for(int i=1;i<=len;i++) a[i]=s[len-i]-'0';
	}
    HPN(int x)
    {
        memset(a,0,sizeof(a));len=0;
        
        while(x){
            a[++len]=x%10;
            x/=10;
        }if(len==0)len++;
    }
    int operator [] (int k) const
    {
        return a[k];
    }
	void show() const
	{
		for(int i=len;i>=1;i--) cout << a[i];
	}
	bool zero(){ return a[len]==0;}
};
HPN operator + (const HPN& A,const HPN& B)
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
HPN operator - (const HPN& A,const HPN& B) // 保证A>=B 
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
bool operator < (const HPN& A,const HPN& B) 
{
	if(A.len!=B.len) return A.len<B.len; 
	for(int i=1;i<=A.len;i++){
		if(A.a[i]!=B.a[i]) return A.a[i]<B.a[i];
	}
	return false;
}
bool operator > (const HPN& A,const HPN& B) 
{
	return B<A;
}
bool operator == (const HPN& A,const HPN& B) 
{
	return !(A<B||B<A);
}
HPN operator * (const HPN& A,int x)
{
    if(x==0) return HPN(0);
	HPN C; C.len=A.len;

    for(int i=1;i<=A.len;i++) C.a[i]=A.a[i]*x;
    for(int i=1;i<=C.len;i++){
        C.a[i+1]+=C.a[i]/10;
        C.a[i]%=10;
        if(C.a[C.len+1]>0)C.len++;
    }
    
    return C;
}
HPN operator / (HPN A,const HPN& B)
{
    HPN C; C.len=A.len-B.len+1;
    for(int i=C.len;i>=1;i--)
    {
        for(;;){
            bool flag=false;
            for(int j=i+B.len;j>=i;j--){
                if(A[j]!=B[j-i+1]){flag=A[j]<B[j-i+1];break;}
            }
            if(flag) break;
            for(int j=i;j<=i+B.len;j++)A.a[j]-=B.a[j-i+1];
            for(int j=i;j<=i+B.len;j++){
                if(A.a[j]<0){
                    A.a[j+1]--;
                    A.a[j]+=10;
                }
            }
            C.a[i]++;
        }
    }
    while(C.a[C.len]==0&&C.len>1) C.len--;
    return C;
}
HPN operator %= (HPN& A,const HPN& B){
    HPN C; C.len=A.len-B.len+1;
    for(int i=C.len;i>=1;i--)
    {
        for(;;){
            bool flag=false;
            for(int j=i+B.len;j>=i;j--){
                if(A[j]!=B[j-i+1]){flag=A[j]<B[j-i+1];break;}
            }
            if(flag) break;
            for(int j=i;j<=i+B.len;j++)A.a[j]-=B.a[j-i+1];
            for(int j=i;j<=i+B.len;j++){
                if(A.a[j]<0){
                    A.a[j+1]--;
                    A.a[j]+=10;
                }
            }
            C.a[i]++;
            
            
        }
    }
    while(C.a[C.len]==0&&C.len>1) C.len--;
    return C;
}
    

string s1,s2;
int main() 
{
	
	cin >> s1 >> s2;
	HPN A(s1),B(s2);
	HPN C=A/B;
	C.show();
	return 0;
}

