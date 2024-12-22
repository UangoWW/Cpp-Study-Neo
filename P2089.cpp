#include <iostream>
using namespace std;

int n;
int sum = 0;
int current[10];

void f(int depth, int sum) {
    if (depth == 10) {
        if (sum == n) {
            sum++;
            if (sum == 1) {
                for (int i = 0; i < 10; i++) {
                    cout << current[i] << " ";
                }
                cout<<endl;
            }
        }
        return;
    }

    for (int i = 1; i <= 3; i++) {
        if (sum + i <= n) {
            current[depth] = i;
            f(depth + 1, sum + i);
        }
    }
}

int main() {
    cin >> n;
    f(0, 0);

    if (sum == 0) {
        cout << 0 << endl;
    } else {
        cout << sum << endl;
    }
    
    return 0;
}
