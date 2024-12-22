#include <iostream>
#include <algorithm>

using namespace std;
int a[10085];  
int pm[10086]; 
int main() {
    int n;
    cin >> n;  
       

    for (int i = 0; i < n; ++i) {
        cin >> a[i];  
        pm[i] = 1; 
    }

 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[j] < a[i]) {
                pm[i]++;
            }
        }
    }

    
    for (int i = 0; i < n; ++i) {
        cout << pm[i] << " ";
    }

    return 0;
}
