#include <iostream>
#include <algorithm>

const int MAXN = 100000;
using namespace std;
int main() {
    int n, w;
    cin >> n >> w;

    int scores[MAXN];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    for (int i = 0; i < n; i++) {
        int p = i + 1;
        int plan_winners = max(1, p * w / 100);
        int threshold = scores[0];
        for (int j = 1; j < p; j++) {
            if (scores[j] > threshold && j < plan_winners) {
                threshold = scores[j];
            }
        }
        cout << threshold << " ";
    }

    cout << endl;

    return 0;
}
