#include <iostream>
#include <algorithm>
#include <cstring>
#include <iomanip>
using namespace std;
typedef long long ll;



int main(){
  

    //P1706
    int n;cin>>n;
    int a[10];
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
    do
    {
        for(int i=1;i<=n;i++)cout<<setw(5)<<a[i];
        cout<<endl;
    } while (next_permutation(a+1,a+n+1));
    
    return 0;
}