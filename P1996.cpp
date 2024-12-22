#include <iostream>
using namespace std;
const int MAXN = 105;
int josephus(int n, int m) {
    int Q[MAXN];
    for (int i = 1; i <= n; ++i) {
        Q[i] = i;
    }
    int res[MAXN];
    int index = 0;
    for (int i = 0; i < n; ++i) {
        index = (index + m - 1) % (n - i);
        res[i] = Q[index + 1];
        for (int j = index + 1; j < n - i; ++j) {
            Q[j] = Q[j + 1];
        }
    }

    return res[n-1];
}

int main() {
    int n, m;
    cin >> n >> m;

    int result = josephus(n, m);
    cout << result << endl;

    return 0;
}
