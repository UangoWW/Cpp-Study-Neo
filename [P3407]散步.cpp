#include<iostream>
#include<stack>
using namespace std;
long long t;
int x,b;
struct node{
	int n;
	long long pos,dir;
}a[100005];
stack<node> s;
int main(){
	cin >> x >> t >> b;
	for(int i = 1;i <= x;i++){
		cin >> a[i].pos >> a[i].dir;
		if(a[i].dir == 2) a[i].dir = -1;
		a[i].n = i;
	}
	for(int i = 1;i <= x;i++){
		if(i == 1 && a[i].dir == -1){ //最西边的向西走 
			a[i].pos = t * a[i].dir + a[i].pos;
			continue;
		}
		if(i == x && a[i].dir == 1){ //最东边的向东走 
			a[i].pos = t * a[i].dir + a[i].pos;
			continue;
		}
		if(a[i].dir == 1) s.push(a[i]);
		if(a[i].dir == -1){
			if(s.empty()){
				long long p = a[i - 1].pos;
				if(a[i].pos + a[i].dir * t <= p){
					a[i].pos = p;
				}else{
					a[i].pos = a[i].pos + a[i].dir * t;
				}
			}else{
				long long l = s.top().pos;
				long long r = a[i].pos;
				long long mid = (l + r) / 2;
				if(a[i].pos + a[i].dir * t <= mid){
					a[i].pos = mid;
					while(!s.empty()){
						node last = s.top();
						int nn = last.n;
						s.pop();
						if(last.pos + last.dir * t >= mid){
							last.pos = mid;
						}
						else{
							last.pos = last.dir * t +last.pos;
						}
						a[nn] = last;
					}
				}
				else{
					a[i].pos = a[i].dir * t +a[i].pos;
					long long p = a[i].pos;
					while(!s.empty()){
						node last = s.top();
						s.pop();
						int nn = last.n;
						if(last.pos + last.dir * t >= p){
							last.pos = p;
						}else{
							last.pos = last.dir *t +last.pos;
						}
						a[nn] = last;
					}
				}
			}
		}
	}
	while(!s.empty()){
		node z = s.top();
		s.pop();
		int nn = z.n;
		z.pos = z.pos + z.dir * t;
		a[nn] = z;
	}
	for(int i = 1;i <= b;i++){
		int m;
		cin >> m;
		cout << a[m].pos << endl;
	}
	return 0;
}