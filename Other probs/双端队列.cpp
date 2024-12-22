#include <bits/stdc++.h>
using namespace std;
int IN[15];
int N,K;
bool check(int input[], int output[]) {
    stack<int> s;  
    unordered_set<int> in_queue;
    int inputI = 0;  
    int outI = 0;  
    while (outI < N) {
        if (s.empty() || s.top() != output[outI]) {
            
            while (inputI < N) {
                
                if (input[inputI] == output[outI]) {
                    s.push(input[inputI]);
                    in_queue.insert(input[inputI]);
                    inputI++;
                    break;
                }
                if (in_queue.find(input[inputI]) == in_queue.end()) {
                    s.push(input[inputI]);
                    in_queue.insert(input[inputI]);
                    inputI++;
                }
                else return false;
            }
        }
        if (!s.empty() && s.top() == output[outI]) {
            s.pop();
            outI++;
        }
        else return false;
    }
    return true;
}

int main() {
    
    cin>>N>>K;
    for (int i=0;i<N;i++) {
        cin>>IN[i];
    }
    for (int i = 0; i < K; i++) {
        int OUT[15];
        for (int j = 0; j < N; j++) {
            cin >> OUT[j];
        }
        cout << (check(IN, OUT) ? "yes" : "no") << endl;
    }

    return 0;
}