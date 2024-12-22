#include<bits/stdc++.h>
using namespace std;
const int MAXL=100010;
vector<int> v;
int n;
int visited[MAXL];
bool isLegal(){
    stack<int> sk;
    int idx=1;
    int k=0;
    while(idx<=n){
        sk.push(idx++);
        while(!sk.empty()&&sk.top()==v[k]){
            sk.pop();
            k++;
        }
        
    }
    return sk.empty()&&k==n;
}
int main(){
 
    //数据的输入和非法输入判断
    cin>>n;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        if(visited[tmp]||tmp<=0||tmp>n){
            cout<<"NO"<<endl;
            system("pause");
            return 0;
        }
        v.push_back(tmp);
        visited[tmp]=1;
    }
 
    //判断是否合法
    if(!isLegal()){
        cout<<"NO"<<endl;
        system("pause");
        return 0;
    }
 
    //模拟栈
    stack<int> sk;
    int i=0;//i是出栈的指针
    int j=1;//j是入栈的指针
    while(i<n){//最后一个操作是出栈
        if(!sk.empty()&&sk.top()==v[i]){
            cout<<"POP "<<v[i]<<endl;
            sk.pop();
            i++;
        }
        else{
            cout<<"PUSH "<<j<<endl;
            sk.push(j);
            j++;
        }
    }
    system("pause");
}