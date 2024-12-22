#include <iostream>
#include <cstring>
using namespace std;

void print(const string& message) {
    cout << message << endl;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Consume newline

    for (int i = 0; i < n; ++i) {
        string operation;
        getline(cin, operation);

        if (operation.substr(0, 7) == "print(\"") {
            string message = operation.substr(7, operation.size() - 9);
            print(message);
        }
    }

    return 0;
}
