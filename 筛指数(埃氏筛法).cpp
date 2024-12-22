#include <iostream>
#include <vector>
#include <climits> // 包含 INT_MIN 和 INT_MAX
using namespace std;

int main() {
    int n;
    cin >> n;

    int N[10005];
    for (int i = 0; i < n; ++i) {
        cin >> N[i];
    }

    int max = -99999;
    int min = 99999;
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        if (N[i] > max) {
            max = N[i];
        }
        if (N[i] < min) {
            min = N[i];
        }
        sum += N[i];
    }

    cout << max << endl;
    cout << min << endl;
    cout << sum << endl;

    return 0;
}
