#include <iostream>
#include <string>

using namespace std;

int cs(string a, string b) {
    int count = 0;
    size_t pos = a.find(b, 0);

    while (pos != string::npos) {
        count++;
        pos = a.find(b, pos + 1);
    }

    return count;
}

int main() {
    string a, b;
    getline(cin, a);  
    getline(cin, b);  

    int result = cs(a, b);

    cout << result << endl;

    return 0;
}
