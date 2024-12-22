#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
int cnt[27];
int main(){
    char a[5][105];
    int maxx=0,len;
    for(int i=0;i<4;i++){
        gets(a[i]);
    }
    for(int i=0;i<4;i++){
        len=strlen(a[i]);
        for(int j=0;j<len;j++){
            if(a[i][j]>='A'&&a[i][j]<='Z'){
                cnt[a[i][j]-'A']++;
            }
        }
    }
    for(int i=0;i<26;i++){
        if(maxx<cnt[i]) maxx=cnt[i];
    }
    for(int j=maxx;j>=1;j--){
        for(int i=0;i<26;i++){
            if(cnt[i]>=j)cout<<"* ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
    for(int i=0;i<26;i++){
        printf("%c ",'A'+i);
    }
    return 0;
}