#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long ll;
struct STU{
    string name;
    int yu,shu,ying;
    void show(){
        cout<<name<<" "<<yu<<" "<<shu<<" "<<ying<<sum()<<endl;
    }
    int sum(){
        return yu+shu+ying;
    }
    bool operator < (STU b) 
    {
        if(sum()!=b.sum()) return sum()>b.sum();
        else if(yu!=b.yu) return yu>b.yu;
        else if(shu!=b.shu) return shu>b.shu;
        return ying>b.ying;
    }
}a[1002];
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].name>>a[i].yu>>a[i].shu>>a[i].ying;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i].name<<" "<<a[i].yu<<" "<<a[i].shu<<" "<<a[i].ying<<" "<<a[i].sum()<<endl;
    }
    
    return 0;
}