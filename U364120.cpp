#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    if (y <= x) {
        int dis = ((x - y) * 100 + x - 1) / x;  
        cout << "-" << dis << "%" << endl;
    } else {
        cout << "?" << endl;
    }

    return 0;
}
