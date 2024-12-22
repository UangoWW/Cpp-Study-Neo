#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int a[105][105],n,m;
char s[105][105];
int main(){
    cin>>n>>m;
   
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>s[i][j];
        }
    }
    for(int i=1;i<=n;i++){//行
        for(int j=1;j<=m;j++){//列
           if(s[i][j]=='*'){
                b[i+1][j+1]++;
                b[i+1][j-1]++;
                b[i+1][j]++;
                b[i][j+1]++;
                b[i][j-1]++;
                b[i-1][j]++;
                b[i-1][j+1]++;
                b[i-1][j-1]++;
           }
        }
    }
    /*  a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+
        +a[i][j-1]+a[i][j]+a[i][j+1]+
        a[i+1][j-1]+a[i+1][j]+a[i+1][j+1]
    */
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s[i][j]=='*')
                cout<<"*";
            else
                cout<<b[i][j];
        }    
        cout<<endl;
    }
    return 0;
}