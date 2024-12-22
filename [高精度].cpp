#include <iostream>
#include <cstring>
using namespace std;
char a1[1001],b1[1001];
int a[1001],b[1001],c[1001];
int main()
{   
    //+
	// cin>>a1>>b1;
	// int lena=strlen(a1),lenb=strlen(b1);
	// for(int i=1;i<=lena;i++) a[i]=a1[lena-i]-'0';
	// for(int i=1;i<=lenb;i++) b[i]=b1[lenb-i]-'0';
	// int lenc=max(lena,lenb);
	// for(int i=1;i<=lenc;i++) c[i]=a[i]+b[i];
	// for(int i=1;i<=lenc;i++)
	// {
	// 	if(c[i]>=10)
	// 	{
	// 		c[i+1]++;
	// 		c[i]-=10;
	// 	}
	// }
	// if(c[lenc+1]>0) lenc++;
	// for(int i=lenc;i>=1;i--) cout<<c[i];
	// cout << endl;

    //-

	// cin>>a1>>b1;
	// int lena=strlen(a1),lenb=strlen(b1);
	// for(int i=1;i<=lena;i++) a[i]=a1[lena-i]-'0';
	// for(int i=1;i<=lenb;i++) b[i]=b1[lenb-i]-'0';
	// int lenc=lena;
	// for(int i=1;i<=lenc;i++) c[i]=a[i]-b[i];
	// for(int i=1;i<=lenc;i++)
	// {
	// 	if(c[i]<0)
	// 	{
	// 		c[i+1]--;
	// 		c[i]+=10;
	// 	}
	// }
	// while(c[lenc] == 0 && lenc > 1) lenc--;
	// for(int i=lenc;i>=1;i--) cout<<c[i];
	// cout << endl;

    //*
    // cin>>a1>>b1;
	// int lena=strlen(a1),lenb=strlen(b1);
	// for(int i=1;i<=lena;i++) a[i]=a1[lena-i]-'0';
	// for(int i=1;i<=lenb;i++) b[i]=b1[lenb-i]-'0';
	// int lenc=lena+lenb-1;
	// for(int i=1;i<=lena;i++){
	// 	for(int j=1;j<=lenb;j++){
	// 		c[i+j-1]+=a[i]*b[j];
	// 	}
	// }
	// for(int i=1;i<=lenc;i++)
	// {
	// 	c[i+1]+=c[i]/10;
	// 	c[i]%=10;
	// }
	// if(c[lenc+1]>0) lenc++;
	// for(int i=lenc;i>=1;i--) cout<<c[i];
	// cout<<endl;

	return 0;
}
