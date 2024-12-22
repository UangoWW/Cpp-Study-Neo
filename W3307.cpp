#include <iostream>
#include <unordered_set>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<long long> s;
    long long num;

    for (int i = 0; i < n; ++i) {
        cin >> num;
        s.insert(num);
    }

    cout << s.size() << endl;

    return 0;
}
